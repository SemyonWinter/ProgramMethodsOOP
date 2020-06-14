#pragma once
#include "number.h"

class number_fractal : public number
{
public:
	int numerator_int;
	int denominator_int;
	void out(std::ofstream &ofstr);
	void in(std::ifstream &ifstr);

	void multi_met(number *n, std::ofstream &ofstr);
	void multi_fra(std::ofstream &ofstr);
	void multi_com(std::ofstream &ofstr);
};