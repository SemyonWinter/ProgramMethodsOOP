#pragma once
#include "number.h"

class number_complex : public number
{
public:
	double real_double;
	double imag_double;
	std::string measure;
	void out(std::ofstream &ofstr);
	bool in(std::ifstream &ifstr);
	double new_function();
};