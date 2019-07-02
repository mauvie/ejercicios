#include <stdio.h>


int main()
{
    int num1, num2, num3;

    printf("\tCual es el mayor?.\n");
    printf("Introduzca el primer numero: ");
    scanf("%d", &num1 );
    printf("Introduzca el segundo numero: ");
    scanf("%d", &num2 );
    printf("Introduzca el tercer numero: ");
    scanf("%d", &num3 );

    if (num1 >= num2 && num1 >= num3)
        printf("\n%d es el mayor.", num1);
    else

        if (num2 > num3)
            printf("\n%d es el mayor.", num2);
        else
            printf("\n%d es el mayor.", num3);


    return 0;
}
