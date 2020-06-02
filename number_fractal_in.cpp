#include "number_fractal.h"



void number_fractal::in(std::ifstream & ifstr)
{
	ifstr >> numerator_int;
	ifstr >> denominator_int;
	ifstr >> measure;
}