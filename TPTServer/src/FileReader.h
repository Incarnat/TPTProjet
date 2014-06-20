/*
 * FileReader.h
 *
 *  Created on: 15 juin 2014
 *      Author: nicolas
 */

#ifndef FILEREADER_H_
#define FILEREADER_H_

#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <cstdlib>
#include <dirent.h>
#include <iostream>
#include<fstream>
#include "DBWriter.h"
#include "odb.hpp"
#include "point.h"
#include "mouvement.h"
#include "utilisateur.h"

using namespace std;

class FileReader {
public:
	FileReader();
	FileReader(DBWriter* dbwrite);
	virtual ~FileReader();
	virtual void readFile(string filename);
private:
	DBWriter* dbwrite;
};

#endif /* FILEREADER_H_ */
