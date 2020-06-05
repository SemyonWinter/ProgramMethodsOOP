#include "number_fractal.h"


void number_fractal::out(std::ofstream & ofstr)
{
	ofstr << "Type " << int(key + 1) << ": FRACTAL. ";
	ofstr << "Numerator: " << numerator_int << ". ";
	ofstr << "Denominator " << denominator_int << ". ";
<<<<<<< HEAD
	ofstr << "Function " << new_function() << ". ";
=======
	ofstr << "Measure " << measure << ". ";
>>>>>>> feature-3
	ofstr << std::endl;
}