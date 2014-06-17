/*
 * Unzipper.h
 *
 *  Created on: 12 juin 2014
 *      Author: nicolas
 */

#ifndef UNZIPPER_H_
#define UNZIPPER_H_

#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <vector>
#include <stdio.h>
#include <cstdlib>
#include <dirent.h>
#include <iostream>
#include <boost/algorithm/string.hpp>

using namespace std;

class Unzipper {
public:
	Unzipper();
	virtual ~Unzipper();
	virtual void unzip_all();
	virtual void unzip_one();

private:
	virtual void remove_all(vector<string>* files);
	virtual vector<string>* get_allzip();
};

#endif /* UNZIPPER_H_ */
