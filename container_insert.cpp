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
		new_el->next = nullptr;
		// ��������� ������ ��������
		begin->prev = new_el;
		end->next = new_el;
		end = new_el; // ������ ��������� �������
	} else { // ���� ��������� ��� � ��������� ������
		new_el->prev = new_el;
		new_el->next = nullptr;
		end = begin = new_el;
	}
}
