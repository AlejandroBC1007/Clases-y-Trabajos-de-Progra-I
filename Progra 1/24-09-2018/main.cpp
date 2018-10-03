#include <iostream>
#include <cstdlib>

using namespace std;

float sumar(float x, float y);
void pedirNumeros();

float sumar(float x, float y){
	return x+y;
}

void pedirNumeros()
{
	float x;
	float y;
	float res;
	cout <<"Ingrese un numero"<<endl;
	cin>>x;
	cout <<"ingrese un numero"<<endl;
	cin>>y;
	res=sumar(x,y);
	cout<<"El resultado es: "<<res<<endl;
}

int main(){
	pedirNumeros();
	system("pause");
	return 0;
}
