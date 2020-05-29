#include "container.h"
#include "number_complex.h"
#include "number_fractal.h"

// Добавляет элемент в конец контейнера
void container::insert(element * new_el)
{
	size++;
	if (begin) { // Если уже есть элементы
		// Связываем новый элемент
		new_el->prev = end;
		new_el->next = nullptr;
		// Связываем старые элементы
		begin->prev = new_el;
		end->next = new_el;
		end = new_el; // Меняем последний элемент
	} else { // Если элементов нет и добавляем первый
		new_el->prev = new_el;
		new_el->next = nullptr;
		end = begin = new_el;
	}
}
