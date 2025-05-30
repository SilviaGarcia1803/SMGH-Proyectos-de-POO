#include <stdio.h>
#include <conio.h>
#define pi 3.1416

class Circulo
{
	private:
		double radio;
				
	public:
		Circulo(double r)
		{
			radio=r;
		}
		
			double Perimetro()
			{
				return pi*2*radio;
			}
			
			double Area()
			{
				return pi*radio*radio;
			}					
};
	
main()
{
	double rad, area, perimetro;
	int opcion;
	
	printf("Calcula el area o perimetro de  un circulo\n");
	printf("Ingresa el radio\n");
	scanf("%lf",&rad);
	
	Circulo obj(rad);
	
	printf("Selecciona una opcion (1 o 2)\n");
	printf("1.- Area\n");
	printf("2.- Perimetro\n");
	scanf("%d",&opcion);
	
	switch(opcion)
	{
		case 1: 
			area = obj.Area();
			printf("El area del circulo es: %.2f",area);
			break;
		case 2: 
			perimetro = obj.Perimetro();
			printf("El perimetro del circulo es: %.2f",perimetro);
			break;
		default: printf("\nopcion invalida");
	}
	
	getch();
}	


