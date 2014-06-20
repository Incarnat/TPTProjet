#include "point.h"

Point::Point()
{
}

Point::Point(int _idMove, int _X, int _Y, double rX, double rY)
{
	this->idMove = _idMove;
	this->X = _X;
	this->Y = _Y;
	this->relatifX = rX;
	    this-> relatifY = rY;
}
