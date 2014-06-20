/*
 * DBWriter.h
 *
 *  Created on: 17 juin 2014
 *      Author: noret
 */

#ifndef DBWRITER_H_
#define DBWRITER_H_

#include "utilisateur.h"
#include "utilisateur-odb.hxx"
#include "mouvement.h"
#include "mouvement-odb.hxx"
#include "point.h"
#include "point-odb.hxx"
#include "odb.hpp"
#include <iostream>
#include <odb/database.hxx>
#include <odb/transaction.hxx>
#include <odb/mysql/database.hxx>
#include <memory>   // std::auto_ptr

using namespace odb::core;

class DBWriter {
public:
	DBWriter();
	virtual ~DBWriter();
	virtual unsigned long pushPoint(Point* p);
	virtual unsigned long pushMouvement(Mouvement* m);
	virtual unsigned long pushUtilisateur(Utilisateur* u);
	virtual void pushPoints(vector<Point*>);
virtual transaction* initTransaction(database* db);
virtual void commit(transaction* t);

private:
database* db;
};

#endif /* DBWRITER_H_ */
