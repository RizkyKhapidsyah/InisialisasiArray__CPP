#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	int x[5] = { 1,2,3,4,5 };
	int i;

	for (i = 0; i <= 4; i++)
	{
		cout << "x[" << i << "] default  = " << x[i] << endl;
	}

	x[2] = 30;
	x[3] = 40;

	cout << endl;

	for (i = 0; i <= 4; i++)
	{
		cout << "x[" << i << "]\t= " << x[i] << endl;
	}

	cout << endl;
	
	_getch();
	return 0;
}