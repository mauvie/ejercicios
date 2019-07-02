#include <stdio.h>
#include <math.h>
#define G 6.673*pow(10,-11)

int main()
{
float F,m1,m2,d;
printf("\tFuerza Gravitacional\n");
printf("\nG=6.673*10^-11 cm^3/gs^2\n");
printf("\nIntroduce el valor de la masa 1: ");
scanf("%f", &m1);
printf("Introduce el valor de la masa 2: ");
scanf("%f", &m2);
printf("Introduce el valor de la distancia entre las masas: ");
scanf("%f", &d);

F=(G*m1*m2)/pow(d,2);
printf("\nEl resultado es %.2g dinas.\n", F);

	return 0;
}
