#include "mouvement.h"

Mouvement::Mouvement()
{
}

Mouvement::Mouvement(string _type, string _application)
{
	this->type = _type;
	this->application = _application;
}
int Mouvement::getIdMove()
{
	return this->ID;
}
