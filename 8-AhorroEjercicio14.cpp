/* Silvia Mariela Garcia Hernandez
Matricula: 362313028
Grupo: 37B-ISC

27 de mayo de 2025

Elaborar un algoritmo para calcular la cantidad que se tendria ahorrada despu�s de 15 a�os si se 
depositan 15 mil pesos a una tasa de inter�s de 3.7% mensual, capitalizable cada mes  */

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
	double DineroAhorrado, TasaDeInteres=0.037, numerador;
	int Meses=15*12, redondear, Ahorro=15000;
	char n = 164;//caracter �
	cout << "DINERO AHORRADO" << endl;
	cout << "En 15 a"<<n<<"os" << endl;
	
	numerador = pow((1+TasaDeInteres),Meses)-1;
	DineroAhorrado = Ahorro+(numerador/TasaDeInteres);
	//cout << "En diez a" <<n<<"os ahorraste $"<<DineroAhorrado;
	redondear=floor(DineroAhorrado);
	cout << "En diez a" <<n<<"os ahorraste $"<<redondear <<" pesos";
	
	return 0;
}
