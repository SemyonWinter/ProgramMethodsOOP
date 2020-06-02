#pragma once
#include "number.h"

class number_fractal : public number
{
public:
	int numerator_int;
	int denominator_int;
	std::string measure;
	void out(std::ofstream &ofstr);
	void in(std::ifstream &ifstr);
};