/*
Aula do dia 03/05/2023
*/

#include <stdio.h>

int main(){

    int x,y, menor;

    printf("Digite dois numeros inteiros: ");
    scanf("%d%d",&x,&y);

    menor = (x > y) ? y : x; // operador ternário -> se x for maior que y, menor recebe y.

    printf("Menor valor = %i ",menor);

    return 0;
}