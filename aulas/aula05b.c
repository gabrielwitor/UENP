/*
Aula do dia 16/08/2023

Matrizes usando arrays

Soma de matrizes
*/

#include <stdio.h>

#define QTDL 3
#define QTDC 3

int main(){
    int matrizA[QTDL][QTDC], matrizB[QTDL][QTDC], matrizC[QTDL][QTDC];

    for (int i = 0; i < QTDL ; i++){
        for(int j = 0; j < QTDC; j++){
            printf("Digite o elemento da matriz A de coordenadas [l:%d c:%d]: ",i,j);
            scanf("%d",&matrizA[i][j]);
        }
    }

    for (int i = 0; i < QTDL ; i++){
        for(int j = 0; j < QTDC; j ++){
            printf("Digite o elemento da matriz B de coordenadas [l:%d c:%d]: ",i,j);
            scanf("%d",&matrizB[i][j]);
        }
    }

    for (int i = 0; i < QTDL ; i++){
        for(int j = 0; j < QTDC; j ++){
            matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }

    for (int i = 0; i < QTDL ; i++){
        for(int j = 0; j < QTDC; j ++){
            printf("Elemento da matriz C de posicao [l:%d c:%d]: %d\n",i,j,matrizC[i][j]);
        }
    }

    return 0;
}