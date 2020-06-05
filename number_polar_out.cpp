#include "number_polar.h"

void number_polar::out(std::ofstream & ofstr)
{
	ofstr << "Type " << int(key + 1) << ": POLAR. ";
	ofstr << "Real: " << angle << ". ";
	ofstr << "Imag: " << dist << ". ";
}