#include "number_fractal.h"


void number_fractal::out(std::ofstream & ofstr)
{
	ofstr << "Type " << int(key + 1) << ": FRACTAL. ";
	ofstr << "Numerator: " << numerator_int << ". ";
	ofstr << "Denominator " << denominator_int << ". ";
	ofstr << std::endl;
}

void number_fractal::in(std::ifstream & ifstr)
{
	ifstr >> numerator_int;
	ifstr >> denominator_int;
}