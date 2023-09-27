/*
Aula do dia 16/08/2023

Matrizes usando arrays

Soma de matrizes usando funções
*/

#include <stdio.h>

#define QTDL 3
#define QTDC 3

void escrevematriz(int matriz[QTDL][QTDC]){
    for (int i = 0; i < QTDL; i++){
        for (int j = 0; j < QTDC; j++){
            printf("Escreva o elemento de coordenadas [%d %d]: ",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }
}

void somamatriz(int matrizA[QTDL][QTDC], int matrizB[QTDL][QTDC], int matrizC[QTDL][QTDC]){
    for (int i = 0; i < QTDL; i++){
        for (int j = 0; j < QTDC; j++){
            matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }
}

void lematriz(int matriz[QTDL][QTDC]){
    for (int i = 0; i < QTDL; i++){
        for (int j = 0; j < QTDC; j++){
            printf("Elemento de posicao [%d %d]: %d\n",i,j,matriz[i][j]);
        }
    }
}

int main(){
    int matrizA[QTDL][QTDC], matrizB[QTDL][QTDC], matrizC[QTDL][QTDC];

    printf("Matriz A:\n");
    escrevematriz(matrizA);
    printf("\nMatriz B\n");
    escrevematriz(matrizB);

    somamatriz(matrizA,matrizB,matrizC);

    printf("Matriz C:");
    lematriz(matrizC);

    return 0;
}
