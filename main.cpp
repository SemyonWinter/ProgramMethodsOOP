#include <iostream>
#include <conio.h>
#include <windows.h>
#include "container.h"
#include "number_complex.h"
#include "number_fractal.h"
#include "number_polar.h"

using namespace std;

int main(int argc, char* argv[]) {
	if (argc != 3) {
		cout << "incorrect command line! "
			"Waited: command infile outfile" << endl;
		exit(1);
	}
	ifstream ifst(argv[1]);
	ofstream ofst(argv[2]);
	cout << "Begin" << endl;
	container c{};
	c.in(ifst);
	cout << "Read. " << endl;
	c.out(ofst, type::COMPLEX);
	cout << "Printed. " << endl;
	c.sort();
	c.out(ofst);
	cout << "Sorted. " << endl;
	system("pause");
	return 0;
}