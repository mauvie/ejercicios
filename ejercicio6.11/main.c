#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int n, res,invertir=0;
    printf("\tInvertir numeros.\n");
    printf("Introduce un numero: ");
    scanf("%d",&n);

    while(n!=0)
    {

        res=n%10;

        n=n/10;

        invertir=invertir*10+res;
    }

    printf("%d \n",invertir);
    return 0;
}
