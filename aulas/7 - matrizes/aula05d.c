/*
Aula do dia 16/08/2023

Matrizes usando arrays

Imprima elementos cujas posições somadas sejam pares.
*/

#include <stdio.h>

#define QTDL 4
#define QTDC 4

int main(){
    int matriz[QTDL][QTDC];

    for (int i = 0; i < QTDL; i++){
        for(int j = 0; j < QTDC; j++){
            printf("Digite o elemento de posicao [%d %d]: ",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }

    for (int i = 0; i < QTDL; i++){
        for(int j = 0; j < QTDC; j++){
            if ((i + j) % 2 == 0){
                printf("\nElemento de posicao [%d %d]: %d",i,j,matriz[i][j]);
            }
        }
    }


    return 0;
}