/*
Utilizando aritmetica de ponteiros, mostre como exibir a frase "nao gosto de programar em
C" como "gosto de programar em C".
*/

#include <stdio.h>

#define FRASE "não gosto de programar em C"

int main(){

    char * ptr = FRASE;

    for(int i = 0; *(ptr) != 'g'; i++)
        ptr++;
    
    while(*ptr != '\0'){
        printf("%c",*ptr);
        ptr++;
    }

    return 0;
}