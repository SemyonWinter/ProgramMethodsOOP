#include "number_fractal.h"



bool number_fractal::in(std::ifstream & ifstr)
{
	if (ifstr.eof()) return false;
	ifstr >> numerator_int;
	if (ifstr.eof() || ifstr.fail() || ifstr.bad()) return false;
	ifstr >> denominator_int;
	// �������� �� ������� �� ����
	if (denominator_int == 0) return false;	
	return (!ifstr.fail() && !ifstr.bad());
}