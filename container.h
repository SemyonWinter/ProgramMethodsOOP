#pragma once
#include "element.h"
class container
{
public:
	void insert(element*);
	void in(std::ifstream& ifstr);
	void out(std::ofstream& ofstr);
	void multimet(std::ofstream& ofstr);
	element* begin;
	element* end;
	int size;

	container();
	~container();
};

