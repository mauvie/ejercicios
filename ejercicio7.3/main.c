#include <stdio.h>
#include <stdlib.h>

float grados(float c);
int main()
{
    float c;
    printf("Introduzca el valor de c: ");
    scanf("%f", &c);
    printf("El resultado sera igual a %.2f F", grados(c));
    return 0;
}

float grados(float c)
{
    return((9.0/5.0)*c) + 32;

}
