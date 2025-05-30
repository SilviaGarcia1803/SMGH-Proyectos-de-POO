/* Silvia Mariela Garcia Hernandez
Matricula: 362313028
Grupo: 37B-ISC

26 de mayo de 2025

elaborar un algoritmo para calcular la cantidad que se tendria ahorrada despues de 10 años si se
depositan 1000 pesos mensualmente a una tasa de interes mensual de 3%, capitalizable cada mes, es decir, 
que al capital se le agreguen los intereses */

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){

	double DineroAhorrado, TasaDeInteres=0.03, numerador;
	int DepositoMensual=1000, Meses=120, redondear;
	const char n = 164;//caracter ñ
	cout << "DINERO AHORRADO" << endl;
	cout << "En 10 a"<<n<<"os" << endl;
	
	numerador = pow((1+TasaDeInteres),Meses)-1;
	DineroAhorrado = DepositoMensual*(numerador/TasaDeInteres);
	//cout << "En diez a" <<n<<"os ahorraste $"<<DineroAhorrado;
	redondear=floor(DineroAhorrado);
	cout << "En diez a" <<n<<"os ahorraste $"<<redondear <<" pesos";
	return 0;
}

	/*double cantidad=1000, intereses=0.03;
	cout << "AHORRO" << endl;
	cout << "En 10 años"<< endl;
	
	for(int a=0;a<10;++a){
		for(int m=0;m<12;++m){
			cantidad=cantidad+intereses;
			intereses+=intereses;
		}
	}
	cout << "Tu dinero ahorrado es $"<<cantidad;*/
