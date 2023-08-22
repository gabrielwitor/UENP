/*
Faça um programa que leia uma matriz 4 x 5, determine e mostre através de uma função
o menor elemento dessa matriz.
*/

#include <stdio.h>

#define QTDL 4
#define QTDC 5

void menorelem(int matriz[QTDL][QTDC]);

int main(){
    int matriz[QTDL][QTDC];

    for (int i = 0; i < QTDL; i++){
        for (int j = 0; j <QTDC; j++){
            printf("Digite o elemento de posicao[%d %d]: ",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }

    menorelem(matriz);

    return 0;
}

void menorelem(int matriz[QTDL][QTDC]){
    int menorelem = matriz[0][0];
    for (int i = 0; i < QTDL; i++){
        for (int j = 0; j < QTDC; j++){
            menorelem = (menorelem >= matriz[i][j]) ? matriz[i][j] : menorelem;
        }
    }
    printf("O menor dos elementos e: %d",menorelem);
}