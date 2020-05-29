#include "element.h"



element::element()
{
	el_data = nullptr;
	next = prev = nullptr;
}

element::~element()
{
	delete el_data;
}
