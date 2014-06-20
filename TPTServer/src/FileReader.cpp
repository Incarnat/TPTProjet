/*
 * FileReader.cpp
 *
 *  Created on: 15 juin 2014
 *      Author: nicolas
 */

#include <iostream>
#include <vector>
#include "FileReader.h"
#include "mouvement.h"
#include "point.h"


FileReader::FileReader() {
	// TODO Auto-generated constructor stub

}

FileReader::~FileReader() {
	// TODO Auto-generated destructor stub
}

void FileReader::readFile(string filename){
	ifstream file (filename.c_str());
	string value;
	vector <string> line;



	while ( file.good() )
	{
		getline ( file, value); // read a string until next comma: http://www.cplusplus.com/reference/string/getline/
		line.push_back(value);
	}

	for(int unsigned i=0;i<line.size();i++)
	{
vector <Point*> vectPoint;

		string delimiter = ";";
		size_t pos = 0;
		string token;
		vector <string> champs;

		while ((pos = line[i].find(delimiter)) != string::npos)
		{
			token = line[i].substr(0, pos);
			champs.push_back(token);
			//std::cout << token << std::endl;
			line[i].erase(0, pos + delimiter.length());
		}
		token = line[i];
		champs.push_back(token);
		//std::cout << token << std::endl;

		Mouvement *move = new Mouvement(champs[5], champs[4]);
//Doit avoir un int, via une fonction spécifique.


		vector <int> vecteurX;
		vector <int> vecteurY;
		vector <double> vecteurXr;
		vector <double> vecteurYr;


		delimiter = ",";

		while ((pos = champs[0].find(delimiter)) != string::npos)
		{
			token = champs[0].substr(0, pos);
			vecteurX.push_back(atoi(token.c_str()));
			//std::cout << token << std::endl;
			champs[0].erase(0, pos + delimiter.length());
		}
		token = champs[0];
		vecteurX.push_back(atoi(token.c_str()));

		while ((pos = champs[1].find(delimiter)) != string::npos)
		{
			token = champs[1].substr(0, pos);
			vecteurY.push_back(atoi(token.c_str()));
			//std::cout << token << std::endl;
			champs[1].erase(0, pos + delimiter.length());
		}
		token = champs[1];
		vecteurY.push_back(atoi(token.c_str()));

		while ((pos = champs[2].find(delimiter)) != string::npos)
		{
			token = champs[2].substr(0, pos);
			vecteurXr.push_back(atof(token.c_str()));
			//std::cout << token << std::endl;
			champs[2].erase(0, pos + delimiter.length());
		}
		token = champs[2];
		vecteurXr.push_back(atof(token.c_str()));

		while ((pos = champs[3].find(delimiter)) != string::npos)
		{
			token = champs[3].substr(0, pos);
			vecteurYr.push_back(atof(token.c_str()));
			//std::cout << token << std::endl;
			champs[3].erase(0, pos + delimiter.length());
		}
		token = champs[3];
		vecteurYr.push_back(atof(token.c_str()));


		for (int k = 0; k<vecteurX.size(); k++)
		{
			Point *point = new Point(move->getIdMove(), vecteurX[k], vecteurY[k], vecteurXr[k], vecteurYr[k]);
			vectPoint.push_back(point);
		}
	}
}
