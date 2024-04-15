/*
Faça um programa que leia uma matriz de ordem 3 x 5 e calcule a soma dos elementos de
cada coluna da matriz, armazenando os resultados em um vetor. Depois, o programa deve
exibir o vetor resultante.
*/

#include <stdio.h>

#define QTDL 3
#define QTDC 5 

int main(){
    float matriz[QTDL][QTDC], vetor[QTDC] = {0,0,0,0,0};

    for(int i = 0 ; i < QTDL; i++){
        for(int j = 0; j <QTDC; j++){
            printf("Digite o elemento de posicao[%d %d]: ",i,j);
            scanf("%f",&matriz[i][j]);
        }
    }

    for(int i = 0; i < QTDL; i++){
        for (int j = 0; j < QTDC; j++){
            vetor[j] += matriz[i][j]; 
        }
    }

    for(int i = 0; i < QTDC; i++){
        printf("Soma da coluna %d: %.2f\n",i,vetor[i]);
    }

    return 0;
}