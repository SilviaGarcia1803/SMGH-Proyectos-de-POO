/*Silvia Mariela Garcia Hernandez 37B
Matricula: 362313028
Grupo: 37B-ISC

/*deportes que se jueguen con balon (objeto al que se le inyecta aire)
-definir la clase deporte
-Atributos: numJugadores, balon, cancha, objetivo,ConQueSeJuega,

Definir la clase deporte con tres atributos
deportes que se juegan con balon
definir las clases derivadas dependiendo con que parte del cuerpo se toca el balon
3 metodos*/

#include <cstdlib>
#include <iostream>
#include <string.h>
using namespace std;

class Deporte{
	private:
	public:	
		void Balon(){
			cout<<"\nse juega con el balon \n";
		}
};

class ConMano: public Deporte{
	private:
		string nombre;
		string jugadores;
		string cancha;
	public:
		ConMano(string n, string j, string c){
			nombre=n;
			jugadores=j;
			cancha=c;
		}
		void DarAlta(){
			//printf("\nDeporte con mano");
			cout<<"\nIngresa el nombre: ";
			getline(cin,nombre);
			cout<<"Numero de jugadores: ";
			getline(cin,jugadores);
			cout<<"Lugar en donde se juega: ";
			getline(cin,cancha);
		}
		void Imprimir(){
			cout<<"\nel "<<nombre;
			cout<<" es un deporte";
			cout<<"\nse necesitan "<<jugadores;
			cout<<" jugadores para jugar";
			cout<<"\nse juega en "<<cancha;
		}
};

class ConPie: public Deporte{
	private:
		string nombre;
		string jugadores;
		string cancha;
	public:
		ConPie(string n, string j, string c){
			nombre=n;
			jugadores=j;
			cancha=c;
		}
		void DarAlta(){
			//printf("\nDeporte con mano");
			cout<<"\nIngresa el nombre: ";
			getline(cin,nombre);
			cout<<"Numero de jugadores: ";
			getline(cin,jugadores);
			cout<<"Lugar en donde se juega: ";
			getline(cin,cancha);
		}
		void Imprimir(){
			cout<<"\nel "<<nombre;
			cout<<" es un deporte";
			cout<<"\nse necesitan "<<jugadores;
			cout<<" jugadores para jugar";
			cout<<"\nse juega en "<<cancha;
		}
};

main(){
	string nombre, jugadores, cancha;	
	
	//crear e instanciar objetos
	ConMano M(nombre, jugadores, cancha);
	ConPie P(nombre, jugadores, cancha);
	
	cout<<"Deportes";
	
	cout<<"\nIngresa los datos de un deporte que se juegue con las manos";
	M.DarAlta();
	
	cout<<"\nIngresa los datos de un deporte que se juegue con los pies";
	P.DarAlta();

	M.Imprimir();
	M.Balon();
	P.Imprimir();
	P.Balon();
	
	return EXIT_SUCCESS;
}
