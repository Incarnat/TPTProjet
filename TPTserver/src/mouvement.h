#ifndef MOUVEMENT_H
#define MOUVEMENT_H

#include <string>

#include <odb/core.hxx>
using namespace std;

#pragma db object
class Mouvement
{
protected :
#pragma db id auto
    int idMove;
    int idUser;
    string type;
    string application;
    friend class odb::access;

public:
    Mouvement();
};

#endif // MOUVEMENT_H
