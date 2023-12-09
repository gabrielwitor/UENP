/*
Escreva um programa que contenha duas variáveis inteiras. Leia essas
variáveis do teclado. Em seguida, compare seus endereços e exiba o
conteúdo do maior endereço.
*/

#include <stdio.h>

int main(){

    int x, y, *px = &x, *py = &y;
    printf("\nValor 1: ");
    scanf("%d",px);

    printf("\nValor 2: ");
    scanf("%d",py);

    printf("\nValor de 1: %d, endereço de 1: %p",x,px);
    printf("\nValor de 2: %d, endereço de 2: %p",y,py);

    printf("\nConteudo do maior endereço: %d",(px > py) ? *px : *py);

    return 0;
}