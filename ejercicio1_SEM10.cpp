#include <iostream>
using namespace std;
//funcion para mostra en el menu y ejecutar la opcion seleccionada
void menu (){
	int opcion;
	do{
		cout<<"\n--- Cajero automatico ---"<<endl;
		cout<<"1. Depositar 100"<<endl;
		cout<<"2. Retirar 100"<<endl;
		cout<<"3. Mostrar saldo"<<endl;
		cout<<"4. Salir"<<endl;
		cout<<"Seleccione una opción:";
		cin>>opcion;
		
		switch(opcion){
			case 1:
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				cout<<"saliendo..."<<endl;
				break;
			default:
				cout<<"opcion no valida. Intente denuevo."<<endl;
		}
	}while (opcion != 4);
}
int main (){
	menu();
	return 0;
}

int saldo = 0;
void depositar(){
	saldo += 100;
	cout<<"Se han depositado 100 unidades. Nuevo saldo:"<<saldo<<endl;
}

void retirar (){
	if (saldo >= 100){
		saldo -=100;
		cout<<"Se han retirado 100 unidades. Nuevo Saldo:"<<saldo<<endl;
	}else {
		cout<<"Saldo insuficiente."<<endl;
	}
}

void mostrarSaldo(){
	cout<<"Saldo actual:"<<saldo<<endl;
}