//ejrcicio3
#include <iostream>
#include <cmath>
using namespace std;

int main (){
	double num;
	cout<<"ingrese un numero:";
	cin>>num;
	
	cout<<"valor absoluto:"<<fabs(num)<<endl;
	cout<<"Raiz cuadrada:"<<sqrt(num)<<endl;
	cout<<"potencia(n^2):"<<pow(num, 2)<<endl;
	cout<<"Redondeo al entero mas cercano:"<<round(num)<<endl;
	cout<<"Redondeo hacia arriba:"<<ceil(num)<<endl;
	cout<<"Redonde hacia abajo:"<<floor(num)<<endl;
	cout<<"Seno:"<<sin(num)<<endl;
	cout<<"Coseno:"<<cos(num)<<endl;
	cout<<"Tangente:"<<tan(num)<<endl;
	return 0;
}