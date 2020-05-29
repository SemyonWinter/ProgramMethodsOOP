#include "container.h"
#include "number_complex.h"
#include "number_fractal.h"

container::~container()
{
	if (begin == nullptr) return;
	auto temp = begin;
	for (auto i = begin; i; i = temp) {
		temp = i->next;
		delete i;
	}
}