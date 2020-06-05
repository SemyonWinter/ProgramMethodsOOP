#include "container.h"
#include "number_complex.h"
#include "number_fractal.h"

// Записывает контейнер в поток
void container::out(std::ofstream & ofstr, type ignore)
{
	ofstr << size << std::endl;
	if (begin == nullptr) return;
	for (auto i = begin; i; i = i->next) {
		if (ignore == i->el_data->key) continue;
		i->el_data->out(ofstr);
	}
}