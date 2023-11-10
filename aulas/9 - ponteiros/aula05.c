/*
Estudo sobre ponteiros

Incremento, decremento, soma e subtração
*/

#include <stdio.h>

int main(){
    int *p = 0x3E8;
    printf("1000 em hexadecimal: %p\n",p);

    p++;

    printf("1004 em hexadecimal: %p\n",p);

    p = p + 3;
    printf ("1016 em hexadecimal: %p\n", p );
    p = p - 3;
    printf ("1004 em hexadecimal: %p\n", p );

    // É possível analisar que cada vez que somamos o vetor, o endereço da memória aumenta de 4 em 4.
    // Isso se dá pois números inteiros são alocados em 4 bytes dentro da memória.
    return 0;
}