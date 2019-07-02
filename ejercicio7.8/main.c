#include <stdio.h>
#include <stdlib.h>

int suma(int);
int main()
{

    int n;
    printf("Digite el numero de elementos: ");
    scanf("%i", &n);
    printf("El resultado es: %i", suma(n));
    return 0;
}

int suma(int n)
{
    int sum;
    sum = 1;
    if(n==1)
    {
        sum =1;
        return 1;
       }
    else
    {
        sum = n + suma(n-1);
        {
            return sum;
        }
    }

}
