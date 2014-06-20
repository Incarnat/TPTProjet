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
    int X;
    int Y;
    double relatifX;
    double relatifY;

public:
    Point();
    Point(int _idMove, int _X, int _Y, double rX, double rY);
};

#endif // POINT_H
