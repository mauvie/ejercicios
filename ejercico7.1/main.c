#include <stdio.h>
#include <stdlib.h>


char positnegat(int a);
int main()
{
    int a;
    printf("DEVUELVA P SI ES POSITIVO Y N SI ES NEGATIVO\n");
    printf("Introduzca un valor: ");
    scanf("%i", &a);
    printf("El valor es: \n %c",  positnegat(a));


    return 0;
}

char positnegat(int a){
if(a<=0){
    return 'N';
}else {
    return 'P';
}
}

