#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int palidromo(char s[]){

    int n = cant_chars(s);
    int i;
    for( i=0; i<n; i++){
        int i_final = n-1-i;
        if (s[i]!= s[i_final]){
            return 0;
        }
    }
    return 1;
}

int cant_chars(char s[]){
    int c = 0;
   while(s[c]!='\0'){
    c++;
    }
    return c;
}
int main(){
char s[20];
 printf("Digite una palabra: ");
 scanf("%s", s);
 printf("%d", palidromo(s));
 return 0;
}
