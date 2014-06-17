#ifndef UTILISATEUR_H
#define UTILISATEUR_H

#include <string>
#include <odb/core.hxx>
using namespace std;

#pragma db object
class Utilisateur
{
protected:
    int id;
    string type;
    string marqueMachine;
    friend class odb::access;
public:
    Utilisateur();
};
#pragma db member(Utilisateur::id) id
#endif // UTILISATEUR_H
