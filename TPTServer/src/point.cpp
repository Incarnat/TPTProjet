#include "point.h"

Point::Point()
{
}

Point::Point(int _idMove, int _X, int _Y, double rX, double rY)
{
	this->ID = _idMove;
	this->X = _X;
	this->Y = _Y;
	this->X_relatif = rX;
	    this-> Y_relatif = rY;
}
