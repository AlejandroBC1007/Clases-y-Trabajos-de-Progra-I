//Codigo realizado por Oscar Alejandro Bonilla Cortez
//Programacion I Ciclo 02

#include <iostream>//Libreria para la entrada y salida de datos
#include <cstdlib>//Libreria de gestion de la memoria dinamica
#include <windows.h>//Libreria que contiene  las declaraciones de las funciones de la biblioteca Windows API

using namespace std;
	
void g(){
	system("cls");//Funcion usada para limpiar pantalla
}
void w(){
	system("pause");//Funcion usada para pausar la pantalla
}

int main() {
	
	float time;//Variable usada para introducir el tiempo en minutos
	float total1;//Variable usada para calcular el total a pagar
	float total2;//Variable usada para calcular el total a pagar
	float total3;//Variable usada para calcular el total a pagar
	float ta;
	
	cout<<"Programa para calcular la tarifa telefonica acorda a su tiempo de uso"<<endl;
do {
	cout<<"Ingrese la cantidad de minutos"<<endl;
	cin>>time;
}while (time <=0);

g();

//En caso de que sea entre 1 minuto y 10 minutos
    if (time > 0 && time <=10){
    total1 = time * 0.05;
    cout <<"El total a pagar sera de $ "<<total1<<endl;
    }
//En caso de que sea entre 11 minutos y 15 minutos
    else if (time > 10 && time <=15){
    total2 = 10 * 0.05;
    ta = (time - 10) * 0.08;
    cout<<"El total a pagar sera de $ "<<total2 + ta<<endl;
    }
//En caso de que sobre pase los 15 minutos
    else if (time > 15){
    total3 = ((10 * 0.05) + (5 * 0.08));
    ta = (time - 15) * 0.10;
    
    
    cout<<"El total a pagar sera de $ "<<total3+ta<<endl;
    }
    
    w();
    
	return 0;
}
