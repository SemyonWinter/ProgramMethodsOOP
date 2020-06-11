#include "number_polar.h"


bool number_polar::in(std::ifstream & ifstr)
{
	if (ifstr.eof()) return false;
	ifstr >> angle;
	if (ifstr.eof() || ifstr.fail() || ifstr.bad()) return false;
	ifstr >> dist;
	return (!ifstr.fail() && !ifstr.bad());
}