/*
Leia um número real e imprima o resultado do quadrado desse número
*/

#include <stdio.h>

int main(){
    int numero;

    printf("Digite um numero: ");

    scanf("%d",&numero);

    printf("O quadrado de %d e %d.",numero,numero*numero);

    return 0;
}