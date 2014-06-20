#ifndef MOUVEMENT_H
#define MOUVEMENT_H

#include <string>
#include <odb/core.hxx>
using namespace std;

#pragma db object
class Mouvement
{
protected :
	 friend class odb::access;
	#pragma db id auto
    unsigned long ID;
    unsigned long ID_user;
    unsigned long Timestamp;
    string type;
    string application;

public:
    Mouvement();
    Mouvement(string _type, string _application);
    int getIdMove();
};

#endif // MOUVEMENT_H
