#include <iostream>
#include <cstdlib>
#include <conio.h>

/*
	Source by Programiz (https://www.programiz.com)
	Modified For Learn by RK
	I.D.E : VS2022
*/

using namespace std;

int main() {
	long int x, y;

	x = -9999999L;
	y = 10000000L;

	cout << "labs(" << x << ") = |" << x << "| = " << labs(x) << endl;
	cout << "labs(" << y << ") = |" << y << "| = " << labs(y) << endl;

	_getch();
	return 0;
}