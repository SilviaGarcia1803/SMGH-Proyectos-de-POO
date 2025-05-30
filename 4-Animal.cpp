/*Silvia Mariela Garcia Hernandez 37B
Matricula: 362313028
Grupo: 37B-ISC

*definir clase animales
	4 propiedades de cada uno
	3 procedimientos*/

#include <cstdlib>
#include <iostream>
#include <string.h>
using namespace std;

class Animal{
	private:
	public:	
		void Vertebras(){
			cout<<"son animales vertebrados, ";
		}
		
		void Dormir(){
			cout<<"duermen en la noche, ";
		}
};

class Mamifero: public Animal{
	private:
		string comer;
		string pelaje;
	public:
		Mamifero(string p, string c){
			pelaje=p;
			comer=c;
		}
		void DarAlta(){
			cout<<"\nMamifero";
			cout<<"\nde que estan cubiertos? ";
			getline(cin,pelaje);
			cout<<"¿que comen? ";
			getline(cin,comer);
		}
		void Imprimir(){
			cout<<"estan cubiertos de "<<pelaje;
			cout<<", comen "<<comer;
		}
};

class Reptil: public Animal{
	private:
		string comer;
		string pelaje;
	public:
		Reptil(string p, string c){
			pelaje=p;
			comer=c;
		}
		void DarAlta(){
			cout<<"\nReptil";
			cout<<"\nde que estan cubiertos? ";
			getline(cin,pelaje);
			cout<<"¿que comen? ";
			getline(cin,comer);
		}
		void Imprimir(){
			cout<<"estan cubiertos de "<<pelaje;
			cout<<", comen "<<comer;
		}
};

class Ave: public Animal{
	private:
		string comer;
		string pelaje;
	public:
		Ave(string p, string c){
			pelaje=p;
			comer=c;
		}
		void DarAlta(){
			cout<<"\nReptil";
			cout<<"\nde que estan cubiertos? ";
			getline(cin,pelaje);
			cout<<"¿que comen? ";
			getline(cin,comer);
		}
		void Imprimir(){
			cout<<"estan cubiertos de "<<pelaje;
			cout<<", comen "<<comer;
		}
};

main(){
	string comer, pelaje;	
	
	//crear e instanciar objetos
	Mamifero m(comer, pelaje);
	Reptil r(comer, pelaje);
	Ave a(comer, pelaje);
	
	cout<<"Clasificación de animales";
	
	cout<<"\nIngresa los datos de los mamiferos";
	m.DarAlta();
	cout<<"\nIngresa los datos de los reptiles";
	r.DarAlta();
	cout<<"\nIngresa los datos de las aves";
	a.DarAlta();
	
	cout<<"\nLos mamiferos ";
	m.Vertebras();
	m.Dormir();
	m.Imprimir();
	
	cout<<"\nLos reptiles ";
	r.Vertebras();
	r.Dormir();
	r.Imprimir();
	
	cout<<"\nLas aves ";
	a.Vertebras();
	a.Dormir();
	a.Imprimir();

	return EXIT_SUCCESS;
}
