#include "container.h"
#include "number_complex.h"
#include "number_fractal.h"
#include "number_polar.h"


// —читывает все элементы из потока
void container::in(std::ifstream & ifstr)
{
	int count_el;
	ifstr >> count_el;
	while (count_el) {
		int type_key;
		ifstr >> type_key;
		number *num_element;
		if (type_key == 1) {
			num_element = new number_complex;
			num_element->key = type::COMPLEX;
		} else if(type_key == 2) {
			num_element = new number_fractal;
			num_element->key = type::FRACTAL;
		} else if (type_key == 3) {
			num_element = new number_polar;
			num_element->key = type::POLAR;
		}
		else {
			return;
		}
		num_element->in(ifstr);
		element *el_element = new element;
		el_element->el_data = num_element;
		insert(el_element);
		count_el--;
	}
}
