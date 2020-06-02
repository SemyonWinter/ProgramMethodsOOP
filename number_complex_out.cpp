#include "number_complex.h"



void number_complex::in(std::ifstream & ifstr)
{
	ifstr >> real_double;
	ifstr >> imag_double;
	ifstr >> measure;
}