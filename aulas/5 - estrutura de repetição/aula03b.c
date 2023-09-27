/*
Aula do dia 21/06/2023

Estruturas de repetição

EXERCICIO: Imprimir numeros inteiros dentro de um intervalo

*/

#include <stdio.h>

int main(){

    int x,y ,count;

    printf("Digite o valor de x e y: ");
    scanf("%d%d",&x,&y);

    count = x+1;

    while (count < y){

        printf("%d\n",count);
        count++;
    }
    return 0;
}