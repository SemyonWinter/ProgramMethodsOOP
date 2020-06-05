#include "number.h"
#include "number_complex.h"
#include "number_fractal.h"
#include "number_polar.h"

number* number::in_one(std::ifstream & ifstr)
{
	int type_key;
	ifstr >> type_key;
	number *num_element;
	if (type_key == 1) {
		num_element = new number_complex;
		num_element->key = type::COMPLEX;
	}
	else if (type_key == 2) {
		num_element = new number_fractal;
		num_element->key = type::FRACTAL;
	}
	else if (type_key == 3) {
		num_element = new number_polar;
		num_element->key = type::POLAR;
	}
	else {
		return nullptr;
	}
	num_element->in(ifstr);
	ifstr >> num_element->measure;
	return num_element;
}