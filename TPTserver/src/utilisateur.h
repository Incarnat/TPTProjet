#ifndef UTILISATEUR_H
#define UTILISATEUR_H

#include <string>

using namespace std;

class Utilisateur
{
protected:
    int id;
    string type;
    string marqueMachine;
public:
    Utilisateur();
};

#endif // UTILISATEUR_H
