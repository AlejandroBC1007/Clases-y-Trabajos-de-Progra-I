//Programa Hecho por: Oscar Alejandro Bonilla Cortez
//Programa para calcular descuentos mas IVA
#include <iostream>
#include <math.h>


using namespace std;
int main() {
	cout<<"Programa para calcular descuentos en sacos de cafe"<<endl;
	cout<<" Cada saco de cafe tiene un precio de $100"<<endl;
//Declaracion de variables

	float desc; 
	float Saco;
	float venta;
	float iva;
	float Ndesc;
	
//Operaciones para calcular el descuento de los sacos
//Operaciones en caso de que la cantidad comprada de sacos sea menor que 100
	cout<<"Por favor ingrese la cantidad de sacos :"<<endl;	cin>> Saco;
	
		if(Saco < 100){
		venta = Saco * 100;
		iva = venta * 0.13;
		Ndesc = venta - iva;
		cout<<"Su venta es inferior al rango aplicable en descuentos"<< endl;
		cout<<"La venta es de: $"<<Ndesc;
	}
//Operaciones en caso de que la cantidad comprada de sacos sea mayor que 100 y menor o igual que 200
	if(Saco>100 && Saco<=200){
		venta = Saco * 100;
		iva = venta * 0.13;
		Ndesc = venta - iva;
		desc = Ndesc- venta*0.10;  
		
		cout<<"Su compra tiene un total de: $"<<desc;
		
		}
//Operaciones en caso de que la cantidad de sacos sea mayor que 200 y menor o igual que 250
	  if(Saco>200 && Saco<=250){
		iva = venta  * 0.13;
		venta = Saco * 100;
		Ndesc = venta - iva;
		desc = Ndesc - venta*0.15; 
		
		cout<<"Su compra tiene un total de: $"<<desc; 
		}
//Operaciones en caso de que la cantidad de sacos sea mayor que 250 y menor que 300
	  if(Saco>250 && Saco<300){
		venta = Saco * 100;
		iva = venta * 0.13;
		Ndesc = venta - iva;
		desc = Ndesc - venta*0.20; 
		
		cout<<"Su compra tiene un total de: $"<<desc; 
		}
//Operaciones en caso de que la cantidad de sacos sea mayor o igual que 3003
	  if(Saco>=300){
		venta = Saco * 100;
		iva = venta * 0.13;
		Ndesc = venta - iva;
		desc = Ndesc - venta*0.25; 
		
		cout<<"Su compra tiene un total de: $"<<desc;
		}

	return 0;
}
