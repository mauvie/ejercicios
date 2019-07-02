#include <stdio.h>
#include <math.h>
//#define G 6.673*pow(10.0,-8)
float F,m1,m2,d;

int main()
{
printf("\tFuerza Gravitacional\n");
printf("G=6.673*10^-8 cm^3/gs^2\n");
printf("Introduce el valor de la masa 1: ");
scanf("%f", &m1);
printf("Introduce el valor de la masa 2: ");
scanf("%f", &m2);
printf("Introduce el valor de la distancia entre las masas: ");
scanf("%f", &d);

F=((6.673*pow(10.0,-8))*m1*m2)/pow(d,2);
//F=(G*m1*m2)/(d*d);
printf("El resultado es %.2f dinas.", F);

	return 0;
}
