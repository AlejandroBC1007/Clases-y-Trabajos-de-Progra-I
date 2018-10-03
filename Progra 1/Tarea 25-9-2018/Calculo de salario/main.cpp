//Programa realizado por Oscar Alejandro Bonilla Cortez
//La funcion de este programa es calcular el sueldo de los vendedores

#include <iostream>
//Esta libreria esta siendo usada para poder adquirir los datos ingresados y dar los resultados necesarios
#include <conio.h>
//Esta libreria esta siendo usada para darle una mejor presentacion al programa como tal
#include <iomanip>
//Esta libreria esta siendo usada para expresar valores mas exactos
#include <stdio.h>
//Esta libreria esta siendo usada para personalizar el archivo ejecutable en su color de letra y fondo
#include <Windows.h>
//Esta libreria esta siendo usada para insertar archivos de sonido al programa

using namespace std;
float ventas;
//Esta variable se declara como la necesaria para ingresar las ventas
float sueldo;
//Esta variable se declara proxima al final del codigo para calcular una cantidad especifica para el sueldo

int main() {
	//Aqui puede personalizarse el color de fondo y el color de letra al momento de ejecutar el programa
	system ("Color 3E");
	cout <<"Programa hecho para calcular el salario de los empleados acorde al total de las ventas mensuales"<<endl;
	//inicia un ciclo en caso de ingresar numero menores a 0
	do
	{	
	cout <<"Por favor ingrese el numero de ventas mensuales"<<endl; cin>> ventas;
}while (ventas <=0);
//Aqui se calcula cuanto sera el sueldo dependiendo de sus ventas
	if (ventas > 0 && ventas <= 500000) {
		Beep (900, 800);
		cout <<"Su sueldo sera de $80.000"<<endl;
	}
	else if (ventas > 500000 && ventas <= 1000000){
		Beep (900, 800);
		cout <<"Su sueldo sera de $160.000"<<endl;
	}
	else if ( ventas > 1000000 && ventas <=1500000){
		Beep (900, 800);
		cout <<"Su sueldo sera de $320.000"<<endl;
	}
	else if (ventas > 1500000 && ventas <= 2500000){
		Beep (900, 800);
		cout <<"Su sueldo sera de $450.000"<<endl;
	}
	else if (ventas > 2500000 && ventas <= 4000000){
		Beep (900, 800);
		cout <<"Su sueldo sera de $550.000"<<endl;
	}
	else if (ventas > 4000000){
		sueldo = ventas * 0.20;
		Beep (900, 800);
		cout <<fixed<<setprecision(2)<<"Su sueldo sera de $"<<sueldo<<endl;
	}
	return 0; 

}
