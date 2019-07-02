#include <stdio.h>
#include <stdlib.h>


int main()
{

    int j=0, i;
    printf("\tSuma de los primeros 50 numeros naturales.");
    for(i=1; i<=50; i++)
    {
        j=j+i;
    }

    printf("\nEl resultado de la suma de los primeros 50 numeros naturales es: %i\n", j);

}
