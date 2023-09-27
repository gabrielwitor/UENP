/*
Aula do dia 21/06/2023

Estruturas de repetição

EXERCICIO: Faça a tabuada de qualquer valor usnado do while:
*/

#include <stdio.h>

int main(){

    int n, count = 1;

    printf("Digite um numero inteiro: ");
    scanf("%d",&n);

    do
    {
        printf("%d * %d = %d\n",n, count, n * count);
        count++;
    } while (count <= 10);
    
    return 0;
}