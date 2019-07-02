#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, n3;

    printf("Ingrese el primer numero: ");
    scanf("%d", &n1);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &n2);

    printf("Ingrese el tercer numero: ");
    scanf("%d", &n3);

    if (n1!=n2 && n1!=n3 && n2!=n3)
    {
        if(n1<n2 && n1<n3)
        {
            if(n2<n3)
            {
                printf("Los numeros %d, %d, %d estan en orden", n1, n2, n3);
            }

            else
            {
                printf("Los numeros estan en desorden");
            }
        }
        else
        {
            printf("Los numeros son iguales");
        }



        return 0;
    }
}
