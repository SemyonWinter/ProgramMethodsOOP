#pragma once
#include <fstream>
#include <string>
#include "number_types.h"

class number 
{
public:
	virtual void out(std::ofstream &ofstr) = 0;
	virtual void in(std::ifstream &ifstr) = 0;
	static bool comparator(number*num, number*num2);
	virtual double new_function() = 0;
	type key;
};
