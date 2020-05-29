#pragma once
#include <fstream>
#include <string>

enum type {
	COMPLEX,
	FRACTAL
};

class number 
{
public:
	virtual void out(std::ofstream &ofstr) = 0;
	virtual void in(std::ifstream &ifstr) = 0;
	type key;
};
