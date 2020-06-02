#include "number_polar.h"



void number_polar::in(std::ifstream & ifstr)
{
	ifstr >> angle;
	ifstr >> dist;
}