#include "container.h"
#include "number_complex.h"
#include "number_fractal.h"

// Записывает контейнер в поток
void container::out(std::ofstream & ofstr)
{
	ofstr << size << std::endl;
	if (begin == nullptr) return;
	for (auto i = begin; i; i = i->next) {
		i->el_data->out(ofstr);
	}
}