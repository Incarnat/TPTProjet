/*
 * FileReader.cpp
 *
 *  Created on: 15 juin 2014
 *      Author: nicolas
 */

#include "FileReader.h"

FileReader::FileReader() {
	// TODO Auto-generated constructor stub

}

FileReader::~FileReader() {
	// TODO Auto-generated destructor stub
}

void FileReader::readFile(string filename){
	ifstream file (filename.c_str());
	string value;
	while ( file.good() )
	{
	     getline ( file, value, ',' ); // read a string until next comma: http://www.cplusplus.com/reference/string/getline/
	     cout << string( value, 1, value.length()-2 ) <<endl; // display value removing the first and the last character from it
	}
}
