#include <stdio.h>
#include <stdlib.h>

int functionVocal(char m);

int logica(int i, int j);


int main()
{
   printf("%i", functionVocal());
   printf("%i", logica());

    return 0;
}

int functionVocal(char m)
{
    if (m=='A' || m=='E' || m=='I' || m=='O' || m=='U')
    {
        return 1;

    }
    else
    {
        return 0;
    }

int logica(int i, int j)
    {
        if (i%j==0 || j%i==0)
        {
            return 1;
        }
        else
        {
            return 0;
        }



