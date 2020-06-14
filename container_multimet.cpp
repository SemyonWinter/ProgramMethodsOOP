#include "container.h"

void container::multimet(std::ofstream &ofstr)
{
	ofstr << "Multimethod: " << std::endl;
	if (begin == nullptr) return;
	for (auto i = begin; i; i = i->next) {
		for (auto j = begin; j; j = j->next) {
			if (i == j) continue;
			i->el_data->multi_met(j->el_data, ofstr);
			i->el_data->out(ofstr);
			ofstr << std::endl;
			j->el_data->out(ofstr);
			ofstr << std::endl;
		}
	}
}
