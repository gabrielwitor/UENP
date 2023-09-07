/*
Aula do dia 21/06/2023

Estruturas de repetição

Comando for

EXERCICIO: TABUADA USANDO FOR
*/

#include <stdio.h>

int main(){

    int n, i;

    printf("Digite um numero: ");
    scanf("%d",&n);

    for (i = 1; i < 10; i++)
    {
        printf("%d * %d = %d\n",n,i,n*i);
    }
    
    return 0;
}
