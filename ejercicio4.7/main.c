#include <stdio.h>
#include <stdlib.h>

int main()
{
    int aux, v1, v2;

    printf("\tIntercambio de valores\n");
    printf( "   Introduzca el valor de v1: " );
    scanf("%i", &v1 );
    printf( "  Introduzca el valor de v2: " );
    scanf( "%i", &v2 );

    printf( "\tEl Intercambiando de los valores:" );

    aux = v1;
    v1 = v2;
    v2 = aux;

    printf( "\n El nuevo valor de v1 es: %d", v1 );
    printf( "\n El nuevo valor de v2 es: %d", v2 );



    return 0;
	}
