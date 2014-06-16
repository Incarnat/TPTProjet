#ifndef UTILISATEUR_H
#define UTILISATEUR_H

#include <string>
#include <odb/core.hxx>
using namespace std;

#pragma db object
class Utilisateur
{
protected:
#pragma db id auto
    int id;
    string type;
    string marqueMachine;
public:
    Utilisateur();
};

#endif // UTILISATEUR_H
