#include <stdio.h>
#include <stdlib.h>

int main()
{
    int anio, mes;

    printf( "\tCalcula el numero de dia de un mes.\n ");
    printf( "Introduzca anio: ");
    scanf( "%d", &anio );
    printf( "Introduzca mes: ");
    scanf( "%d", &mes );

    switch ( mes )
    {
    case  1 : case  3 : case  5 : case  7 : case  8 : case 10 : case 12 :
        printf( "\n   31 dias");
        break;

    case  4 : case  6 : case  9 : case 11 :
        printf( "\n   30 dias");
        break;

    case  2 :

        if ( anio % 4 == 0 && anio % 100 != 0 || anio % 400 == 0 )
            printf( "\n   29 dias");
        else
            printf( "\n   28 dias");
        break;



    default :
        printf( "\n   ERROR: Mes incorrecto." );
    }



    return 0;
}
