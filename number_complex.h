#pragma once
#include "number.h"

class number_complex : public number
{
public:
	double real_double;
	double imag_double;
	void out(std::ofstream &ofstr);
	void in(std::ifstream &ifstr);
	
	void multi_met(number *n, std::ofstream &ofstr);
	void multi_fra(std::ofstream &ofstr);
	void multi_com(std::ofstream &ofstr);
};