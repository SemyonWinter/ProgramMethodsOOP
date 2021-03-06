﻿#include "pch.h"
#include "CppUnitTest.h"
#include <iostream>
#include <conio.h>
#include <windows.h>
#include "container.h"
#include "number_complex.h"
#include "number_fractal.h"
#include "number_polar.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Test
{
	
	TEST_CLASS(Test)
	{
	public:
		//класс Cartoon
		TEST_METHOD(Insert_function)
		{
			container c{};
			element *el = new element;
			element *el2 = new element;
			c.insert(el);
			Assert::AreEqual(int(c.size), 1);
			c.insert(el2);
			Assert::AreEqual(int(c.size), 2);
		}

		TEST_METHOD(In_function)
		{
			ifstream fin("inp_test2.txt");
			container c{};
			c.in(fin);
			// Проверка размера контейнера
			Assert::AreEqual((c.size), 1);
			// Проверка полей объекта
			number_fractal* num_element = c.begin->el_data;
			Assert::AreEqual(int(((number_fractal*)num_element)->denominator_int), "3");
			Assert::AreEqual(int(((number_fractal*)num_element)->numerator_int), "3");
			Assert::AreEqual(int(c.begin->el_data->measure), "km");
			fin.close();
		}

		TEST_METHOD(New_function)
		{
			ifstream fin("inp_test2.txt");
			container c{};
			c.in(fin);
			Assert::AreEqual((c.size), 1);

			number_fractal* num_element = c.begin->el_data;
			// При входных данных 3;3 новая функция в классе number_fractal выдает 1
			Assert::AreEqual(int(((number_fractal*)num_element)->new_function())), 1);
			fin.close();
		}


		TEST_METHOD(Out_function)
		{
			ifstream fin("inp.txt");
			ofstream fout("inp_out.txt");
			container c{};
			c.in(fin);
			c.out(fout);
			fin.close();
			fout.close();
			ifstream f_test("inp_out.txt");
			// Проверим, пустой ли файл
			Assert::AreEqual(fin.eof(), false);
			f_test.close();
		}

		TEST_METHOD(In_one_function)
		{
			ifstream fin("inp_test4.txt");
			container c{};
			int num;
			fin >> num;
			c.in(fin);
			number *q = number::in_one(fin);
			Assert::AreEqual(int(q->key), 1);
			fin.close();
		}
		
	};
}
