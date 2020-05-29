#pragma once
#include "number.h"

class element
{
public:
	element();
	~element();
	number * el_data;
	element * next;
	element * prev;
};
