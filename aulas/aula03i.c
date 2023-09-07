/*
Aula do dia 21/06/2023

Estruturas de repetição

Comando for

EXERCICIO: imprimir numeros pares entre 1 e 20
*/

#include <stdio.h>

int main(){

    int i;

    for (i = 1; i <= 20; i++){
        if (i % 2 != 0){
            continue;
        }
        printf("%d\n",i);
    }

    return 0;

}
