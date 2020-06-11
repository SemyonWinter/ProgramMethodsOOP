#include "container.h"

// —читывает все элементы из потока
void container::in(std::ifstream & ifstr)
{
	int count_el;
	ifstr >> count_el;
	while (count_el) {
		number *num_element = number::in_one(ifstr);
		if (num_element == nullptr) {
			// ќшибка
			return;
		}
		element *el_element = new element;
		el_element->el_data = num_element;
		insert(el_element);
		count_el--;
	}
}
