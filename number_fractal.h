#pragma once
#include "number.h"

class number_fractal : public number
{
public:
	int numerator_int;
	int denominator_int;
	std::string measure;
	void out(std::ofstream &ofstr);
	bool in(std::ifstream &ifstr);
	double new_function();

	void multi_met(number *n, std::ofstream &ofstr);
	void multi_fra(std::ofstream &ofstr);
	void multi_pol(std::ofstream &ofstr);
	void multi_com(std::ofstream &ofstr);
};