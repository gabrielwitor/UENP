/*
Faça um programa que leia uma matriz de ordem 5 x 3, calcule e mostre a soma de cada
linha da matriz.
*/

#include <stdio.h>

#define QTDL 5
#define QTDC 3 

int main(){
    float matriz[QTDL][QTDC], soma;

    for(int i = 0; i < QTDL; i++){
        for (int j = 0; j < QTDC; j++){
            printf("Digite o elemento de posicao[%d %d]: ",i,j);
            scanf("%f",&matriz[i][j]);
        }
    }

    for(int i = 0; i < QTDL; i++){
        soma = 0;
        for (int j = 0; j < QTDC; j++){
            soma += matriz[i][j];
        }
        printf("A soma dos elementos da linha [%d] e: %.2f\n",i,soma);
    }

    return 0;
}