#include "number.h"

// Записывает контейнер в поток
void number::out_one(std::ofstream & ofstr, type ignore)
{
	out(ofstr);
	ofstr << "Function " << new_function() << ". ";
	ofstr << "Measure " << measure << ". ";
	ofstr << std::endl;
}