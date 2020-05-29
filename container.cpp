#include "container.h"
#include "number_complex.h"
#include "number_fractal.h"

// ��������� ������� � ����� ����������
void container::insert(element * new_el)
{
	size++;
	if (begin) { // ���� ��� ���� ��������
		// ��������� ����� �������
		new_el->prev = end;
		new_el->next = begin;
		// ��������� ������ ��������
		begin->prev = new_el;
		end->next = new_el;
		end = new_el; // ������ ��������� �������
	} else { // ���� ��������� ��� � ��������� ������
		new_el->next = new_el->prev = new_el;
		end = begin = new_el;
	}
}

// ��������� ��� �������� �� ������
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
		} else {
			return;
		}
		num_element->in(ifstr);
		element *el_element = new element;
		el_element->el_data = num_element;
		insert(el_element);
		count_el--;
	}
}

// ���������� ��������� � �����
void container::out(std::ofstream & ofstr)
{
	ofstr << size << std::endl;
	if (begin == nullptr) return;
	for (auto i = begin; ; i = i->next) {
		i->el_data->out(ofstr);
		if (i == end) break; // ����� �� ����� ����� ��������� ���������� ��������
	}
}

container::container()
{
	size = 0;
	begin = end = nullptr;
}


container::~container()
{
	if (begin == nullptr) return;
	auto temp = begin;
	for (auto i = begin; ; i = temp) {
		temp = i->next;
		delete i;
		if (i == end) break; // ����� �� ����� ����� ��������� ���������� ��������
	}
}