#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <math.h>

using namespace std;

int main(int argc, char** argv) {
	int e;
	int fac=1;
	cout <<"Ingrese el numero: "<<endl;
	cin >> e;
	for (int f = 1; f <= e; f++)
	{
		fac = fac*f;
	}
	
	cout << "El resultado es: "<<fac<<endl;

	return 0;
}
