#include "number_complex.h"


bool number_complex::in(std::ifstream & ifstr)
{
	if (ifstr.eof()) return false;
	ifstr >> real_double;
	if (ifstr.eof() || ifstr.fail() || ifstr.bad()) return false;
	ifstr >> imag_double;
	return (!ifstr.fail() && !ifstr.bad());
}