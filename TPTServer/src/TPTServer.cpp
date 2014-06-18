//============================================================================
// Name        : TouchpadTracker.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//
// async_tcp_echo_server.cpp
// ~~~~~~~~~~~~~~~~~~~~~~~~~
//
// Copyright (c) 2003-2013 Christopher M. Kohlhoff (chris at kohlhoff dot com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//

#include "TPTServer.hpp"

using boost::asio::ip::tcp;
using namespace odb::core;

class Mysession
{
public:
	Mysession(boost::asio::io_service& io_service)
	: socket_(io_service)
	{
	}

	tcp::socket& socket()
	{
		return socket_;
	}

	void start()
	{
		std::cout<<"hi"<<std::endl;
		long int now=(long int)time(0);

		outputname << now << ".zip";
		socket_.async_read_some(boost::asio::buffer(data_, max_length),
				boost::bind(&Mysession::handle_read, this,
						boost::asio::placeholders::error,
						boost::asio::placeholders::bytes_transferred));

	}
private:
	stringstream outputname;
	void handle_read(const boost::system::error_code& error,
			size_t bytes_transferred)
	{
		if (!error)
		{

			std::ofstream outputFile(outputname.str().c_str(), std::ios_base::app);

			outputFile << std::string(data_, bytes_transferred);
			socket_.async_read_some(boost::asio::buffer(data_, max_length),
					boost::bind(&Mysession::handle_read, this,
							boost::asio::placeholders::error,
							boost::asio::placeholders::bytes_transferred));
		}
		else
		{
			delete this;
			//afterwards, let's unzip what we got
			pid_t pID = fork();
			if (pID==0)
			{
				Unzipper* unzipper = new Unzipper();
				//unzipper->unzip_all();
				unzipper->unzip_one();
				//then dispose of .zip
			}else if(pID>0)
			{
				int statut;
				int options=0;
				waitpid(pID,&statut,options);
			}
		}
	}

	void handle_write(const boost::system::error_code& error)
	{

		if (!error)
		{
			socket_.async_read_some(boost::asio::buffer(data_, max_length),
					boost::bind(&Mysession::handle_read, this,
							boost::asio::placeholders::error,
							boost::asio::placeholders::bytes_transferred));

		}
		else
		{

			delete this;
		}
	}

	tcp::socket socket_;
	enum { max_length = 2048 };
	char data_[max_length];
};

class server
{
public:
	server(boost::asio::io_service& io_service, short port)
	: io_service_(io_service),
	  acceptor_(io_service, tcp::endpoint(tcp::v4(), port))
	{
		start_accept();
	}

private:
	void start_accept()
	{
		Mysession* new_session = new Mysession(io_service_);
		acceptor_.async_accept(new_session->socket(),
				boost::bind(&server::handle_accept, this, new_session,
						boost::asio::placeholders::error));
	}

	void handle_accept(Mysession* new_session,
			const boost::system::error_code& error)
	{
		if (!error)
		{
			new_session->start();

		}
		else
		{
			delete new_session;
		}

		start_accept();
	}

	boost::asio::io_service& io_service_;
	tcp::acceptor acceptor_;
};

int main(int argc, char* argv[])
{
	try
	{
		if (argc < 2)
		{
			std::cerr << "Usage: async_tcp_echo_server <port>\n";
			return 1;
		}

		boost::asio::io_service io_service;

		using namespace std; // For atoi.
		server s(io_service, atoi(argv[1]));
		//ODB
		auto_ptr<database> db (new odb::mysql::database (argc, argv));
		transaction t (db->begin ());
		Utilisateur u(5,"false","lolbook");
		unsigned long u_id=db->persist(u);
		cout << u_id;
		t.commit ();
	//	io_service.run();
		//FileReader* fileR=new FileReader();
		//fileR->readFile("/cal/homes/noret/git/TPTServer/TPTServer/lol.csv");

	}
	catch (std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << "\n";
	}

	return 0;
}
