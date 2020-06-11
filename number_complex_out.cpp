#include "stdafx.h"
#include "number_complex.h"


void number_complex::out(std::ofstream & ofstr)
{
	ofstr << "Type " << int(key + 1) << ": COMPLEX. ";
	ofstr << "Real: " << real_double << ". ";
	ofstr << "Imag: " << imag_double << ". ";
}