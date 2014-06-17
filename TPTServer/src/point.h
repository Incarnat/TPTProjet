#ifndef POINT_H
#define POINT_H

#include <string>

#include <odb/core.hxx>
using namespace std;

#pragma db object
class Point
{
protected:
#pragma db id auto
    int idPoint;
    int idMove;
    double timestamps;
    double X;
    double Y;
    double relatifX;
    double relatifY;
    friend class odb::access;

public:
    Point();
};

#endif // POINT_H
