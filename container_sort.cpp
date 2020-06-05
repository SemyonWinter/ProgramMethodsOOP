#include "container.h"
#include "number_complex.h"
#include "number_fractal.h"

// Записывает контейнер в поток
void container::sort()
{
	if (begin == nullptr) return;
	for (auto i = begin; i->next; i = i->next) {
		for (auto j = i->next; j; j = j->next) {
			if (number::comparator(i->el_data, j->el_data)) {
				auto z = i->el_data;
				i->el_data = j->el_data;
				j->el_data = z;
			}
		}
	}
}