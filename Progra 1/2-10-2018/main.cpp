#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

int main() 
{
	system("color 9E");
    int matriz[30][30];
    int fila;
    int col;
    
    cout<<"Ingrese el numero de filas: "; cin>>fila;
    cout<<"Ingrese el numero de columnas: "; cin>>col;
    
    int matrizB[fila][col];
    
    for(int i=0; i<fila; i++){
    	
    	for(int j=0; j<col; j++){
    		
    		cout<<"Ingrese el dato ["<<i<<"]["<<j<<"]: "; cin>>matriz[i][j];
		}
	}
    for(int i=0; i<fila; i++){
    	
    	for(int j=0; j<col; j++){
    		
    		cout<<matriz[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	for(int i=0; i<fila; i++)
	{
		for(int j=0; j<col; j++)
		{
			
			matrizB[i][j] = matriz[i][j];
		}
	}
	
	cout<<"\nMatriz B\n";
    for(int i=0; i<fila; i++)
	{
		for(int j=0; j<col; j++)
		{
			
			cout<<matrizB[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
	getch();
}
