/*
Faça um programa que leia uma matriz de ordem 5 x 5, calcule e mostre a média dos
elementos da diagonal principal.
*/

#include <stdio.h>

#define QTD 5

int main(){
    float matriz[QTD][QTD], media = 0;
    
    for (int i = 0; i < QTD; i++){
        for (int j = 0; j < QTD; j++){
            printf("Digite o elemento de posicao[%d %d]: ",i,j);
            scanf("%f",&matriz[i][j]);
        }
    }

    for(int i = 0; i < QTD; i++){ // elementos da diagonal principal em que i = j;
        media += matriz[i][i];
    }

    printf("A meida dos elementos da diagonal principal e: %.2f",media/QTD);
    return 0;
}