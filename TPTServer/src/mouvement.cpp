#ifndef MOUVEMENT_H
#define MOUVEMENT_H

#include <string>

using namespace std;

class Mouvement
{
protected :
    int idMove;
    int idUser;
    string type;
    string application;

public:
    Mouvement();
    Mouvement(string _type, string _application);
    int getIdMove();
};

#endif // MOUVEMENT_H
