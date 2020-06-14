#pragma once
#include <fstream>
#include <string>
#include "number_types.h"


class number 
{
public:
	std::string measure;
	virtual void out(std::ofstream &ofstr) = 0;
	virtual bool in(std::ifstream &ifstr) = 0;
	static bool comparator(number*num, number*num2);
	void out_one(std::ofstream & ofstr, type ignore = (type)-1);
	static number* in_one(std::ifstream & ifstr);
	virtual double new_function() = 0;

	virtual void multi_met(number *n, std::ofstream &ofstr) = 0;
	virtual void multi_fra(std::ofstream &ofstr) = 0;
	virtual void multi_pol(std::ofstream &ofstr) = 0;
	virtual void multi_com(std::ofstream &ofstr) = 0;
	type key;
};
