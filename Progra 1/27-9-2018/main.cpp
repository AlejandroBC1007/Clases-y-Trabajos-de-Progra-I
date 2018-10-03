#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
	int mat[5][5];//Declaramos una matriz
	int mat2[5][5];//Declaramos una segunda matriz
	int mat3[5][5];//Declaramos una tercera matriz
	for (int fila=0;fila<5;fila++){//Ciclo For para las filas de la matriz
	    for (int columna=0;columna<5;columna++){
	    	mat[fila][columna]=0;
	    	if (fila == columna || fila%2==0 && columna%2 ==0 || fila%2==1 && columna%2==1 ){
	    		mat3[fila][columna]=0;
				}else{
					mat3[fila][columna]=1;
				}
	   }
	}
	for (int fila=0;fila<5;fila++){
		for (int columna=0;columna<5;columna++){
			cout<<mat3[fila][columna]<<"\t";
		}
		cout<<endl;
	}
	system("pause");
}
