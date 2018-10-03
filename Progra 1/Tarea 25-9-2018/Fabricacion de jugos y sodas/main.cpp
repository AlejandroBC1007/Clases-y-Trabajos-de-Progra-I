//Codigo realizado por Oscar Alejandro Bonilla Cortez BC18010
//Programacion I Ciclo 02
#include <cstdlib>//Libreria de gestion de la memoria dinamica
#include <windows.h>//Libreria que contiene  las declaraciones de las funciones de la biblioteca Windows API
#include <iostream>//Libreria para la entrada y salida de datos

using namespace std;

void e(){
	system ("cls");//Funcion usada para limpiar pantalla
}

void f(){
	system ("pause");//Funcion usada para pausar la pantalla
}

int main() {
	
	int soda;//La cantidad entera de sodas a ingresar
	int jugo;//La cantidad entera de jugos a ingresar
	float soda1;//La cantidad de ml para fabricar la soda
	float soda2;//La cantidad de azucar para fabricar la soda
	float jugo1;//La cantidad de ml para fabricar el jugo
	float jugo2;//La cantidad de azucar para fabricar el jugo
	
	cout<<"Programa para calcular la cantidada fabricar de sodas y jugos"<<endl;
do {
	cout<<"Ingrese la cantidad de sodas a farbicar: "<<endl;
	cin>>soda;
}while (soda <= 0);
 
    soda1 = soda * 500; //Calculo de los insumos de agua necesarios
    cout<<"Los insumos necesarios de agua en la produccion fueron de: "<<soda1<<"ml"<<endl;
    
    soda2 = soda * 800; //Calculo de los insumos de azucar necesarios
    cout<<"Los insumos necesarios de azucar fueron de: "<<soda2<<"g"<<endl;
	f();
    e();
    
do {
	cout<<"Ingrese la cantidad de jugos a farbicar: "<<endl;
	cin>>jugo;
}while (jugo <= 0);
 
    jugo1 = jugo * 600; //Calculo de los insumos de agua necesarios
    cout<<"Los insumos necesarios de agua en la produccion fueron de: "<<jugo1<<"ml"<<endl;
    
    jugo2 = jugo * 700; //Calculo de los insumos de azucar necesarios
    cout<<"Los insumos necesarios de azucar fueron de: "<<jugo2<<"g"<<endl;
    

	return 0;
}
