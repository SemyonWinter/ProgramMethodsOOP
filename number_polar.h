#pragma once
#include "number.h"

class number_polar: public number
{
public:
	int angle;
	double dist;
	std::string measure;
	void out(std::ofstream &ofstr);
	bool in(std::ifstream &ifstr);
	double new_function();
};