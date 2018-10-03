//Programa realizado por Oscar Alejandro Bonilla Cortez
#include <iostream>
#include <cstdlib>
#include <windows.h>

using namespace std;

int main(int argc, char** argv) {
	
	float notas [5];
	float suma=0;
	float promedio;
	for (int i = 0; i<=4; i++)
	{
     do{
	
		cout <<"ingrese la nota "<<i+1<<endl;
		cin>>notas[i];
    }while (notas[i] < 0 || notas[i] > 10);
		suma = suma+notas[i]; //acumular la sumatoria de notas
	}

    //salida de datos en pantalla
    for (int q = 0; q<=4; q++){
    cout<<"Las notas son: "<<endl;
	cout<<"N"<<q+1<<":" << notas[q]<<endl;
    }
	
	promedio = suma/5;
	cout<<"el promedio es de: "<<promedio<<endl;
	
	system("pause");
	return EXIT_SUCCESS;
}
