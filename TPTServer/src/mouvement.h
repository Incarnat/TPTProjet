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
};

#endif // MOUVEMENT_H
