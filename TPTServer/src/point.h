#ifndef POINT_H
#define POINT_H

#include <string>
#include <odb/core.hxx>
using namespace std;

#pragma db object
class Point
{
protected:
	 friend class odb::access;
	#pragma db id auto
    unsigned long ID;
    unsigned long ID_mouvement;
    int X;
    int Y;
    double X_relatif;
    double Y_relatif;

public:
    Point();
    Point(int _idMove, int _X, int _Y, double rX, double rY);
};

#endif // POINT_H
