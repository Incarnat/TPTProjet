/*
 * DBWriter.cpp
 *
 *  Created on: 17 juin 2014
 *      Author: noret
 */

#include "DBWriter.h"

DBWriter::DBWriter() {
	// TODO Auto-generated constructor stub

}

DBWriter::~DBWriter() {
	// TODO Auto-generated destructor stub
}

unsigned long DBWriter::pushPoint(Point* p){
	return db->persist(p);
}

void DBWriter::pushPoints(vector<Point*> v){
	for(int i=0;i<v.size();i++){
		unsigned long u_id=db->persist(v.at(i));
	}

}

unsigned long DBWriter::pushUtilisateur(Utilisateur* u){
	return db->persist(u);
}

unsigned long DBWriter::pushMouvement(Mouvement* m){
	return db->persist(m);
}

transaction* DBWriter::initTransaction(database* db){
	auto_ptr<database> db2(db);
	this->db=db2;
	return (new transaction (db->begin ()));
}

void DBWriter::commit(transaction* t){
t->commit();
}
