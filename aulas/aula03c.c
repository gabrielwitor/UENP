/*
Aula do dia 21/06/2023

Estruturas de repetição

EXERCICIO: Calcula o fatorial de um numero n
*/

#include <stdio.h>

int main(){

    int fat, n, count;

    printf("Digite o numero: ");
    scanf("%d",&n);

    fat = 1;

    count = n;

    while (count > 1){

        fat *= count;
        count--;
    }

    printf("%d! = %d",n,fat);

    return 0;
}

