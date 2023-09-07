/*
Aula do dia 21/06/2023

Estruturas de repetição

EXERCICIO: Faça a tabuada de qualquer valor:
*/

#include <stdio.h>

int main(){

    int n, count = 1;

    printf("Digite um numero inteiro: ");
    scanf("%d",&n);

    while(count <= 10){
        printf("%d * %d = %d\n",n ,count ,n * count);
        count++;
    }
    return 0;
}