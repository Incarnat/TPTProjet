/*
 * Unzipper.cpp
 *
 *  Created on: 12 juin 2014
 *      Author: nicolas
 */

#include "Unzipper.h"


Unzipper::Unzipper() {
	// TODO Auto-generated constructor stub

}

Unzipper::~Unzipper() {
	// TODO Auto-generated destructor stub
}

void Unzipper::unzip_all() {
	vector<string>* files=this->get_allzip();
	pid_t pID = fork();
	if (pID==0)
	{
		execlp("unzip","unzip","-o", "*.zip", (char*)0);
	}else if(pID>0)
	{
		int statut;
		int options=0;
		waitpid(pID,&statut,options);
		this->remove_all(files);
	}
}

void Unzipper::remove_all(vector<string>* files) {
	for (unsigned int i=0;i<files->size();i++){
		remove(files->at(i).c_str());
	}
}

vector<string>* Unzipper::get_allzip(){
	vector<string>* files=new vector<string>;
	string dir=".";
	DIR *dp;
	struct dirent *dirp;
	if((dp  = opendir(dir.c_str())) == NULL) {
		cout << "Error opening " << dir << endl;
	}

	while ((dirp = readdir(dp)) != NULL) {
		if(string(dirp->d_name).find(".zip")!=string::npos)
			files->push_back(string(dirp->d_name));
	}
	closedir(dp);
	return files;
}

void Unzipper::unzip_one() {
	vector<string>* files=this->get_allzip();
	pid_t pID = fork();
	if (pID==0)
	{
		execlp("unzip","unzip","-o", files->at(0).c_str(), (char*)0);
	}else if(pID>0)
	{
		int statut;
		int options=0;
		waitpid(pID,&statut,options);
		remove(files->at(0).c_str());
	}
}


