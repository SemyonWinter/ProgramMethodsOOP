#include <iostream>
#include <conio.h>
#include <windows.h>
#include "container.h"

using namespace std;

int main(int argc, char* argv[]) {
	if (argc != 3) {
		cout << "incorrect command line! "
			"Waited: command infile outfile" << endl;
		exit(1);
	}
	ifstream ifst(argv[1]);
	ofstream ofst(argv[2]);
	if (!ifst.is_open() || ifst.eof()) {
		cout << "Error with input file." << endl;
		return 1;
	}
	if (!ofst.is_open() || ofst.eof()) {
		cout << "Error with output file." << endl;
		return 1;
	}
	cout << "Begin" << endl;
	container c{};
	c.in(ifst);
	cout << "Read. " << endl;
	c.out(ofst);
	cout << "Printed. " << endl;
	c.multimet(ofst);
	c.out(ofst);
	cout << "Sorted. " << endl;
	system("pause");
	return 0;
}