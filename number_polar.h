#pragma once
#include "number.h"

class number_polar: public number
{
public:
	int angle;
	double dist;
	void out(std::ofstream &ofstr);
	void in(std::ifstream &ifstr);
};