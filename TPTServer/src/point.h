#ifndef POINT_H
#define POINT_H

#include <string>

using namespace std;

class Point
{
protected:
    int idPoint;
    int idMove;
    double timestamps;
    double X;
    double Y;
    double relatifX;
    double relatifY;

public:
    Point();
};

#endif // POINT_H
