//Programa realizado por Oscar Alejandro Bonilla Cortez
//La funcion de este programa es calcular el sueldo de los vendedores
#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;
int Ventas;
float Sueldo;
int main() {
	cout <<"Programa hecho para calcular el salario de los empleados acorde al total de las ventas mensuales"<<endl;
	cout <<"Por favor ingrese el numero de ventas mensuales"<<endl; cin>> Ventas;
	
	if (Ventas > 0 && Ventas <= 500000) {
		cout <<"Su sueldo sera de $80.000"<<endl;
	}
	else if (Ventas > 500000 && Ventas <= 1000000){
		cout <<"Su sueldo sera de $160.000"<<endl;
	}
	else if ( Ventas > 1000000 && Ventas <=1500000){
		cout <<"Su sueldo sera de $320.000"<<endl;
	}
	else if (Ventas > 1500000 && Ventas <= 2500000){
		cout <<"Su sueldo sera de $450.000"<<endl;
	}
	else if (Ventas > 2500000 && Ventas <= 4000000){
		cout <<"Su sueldo sera de $550.000"<<endl;
	}
	else if (Ventas > 4000000){
		Sueldo = Ventas * 0.20;
		cout <<"Su sueldo sera de $"<<Sueldo;
	}
	return 0;
}
