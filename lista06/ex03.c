/*
Faça um programa que receba uma matriz de inteiros de ordem 5 x 3 e verifique quais os
elementos da matriz são múltiplos de 3, armazenando esses elementos em um vetor. Depois,
o programa deve exibir o vetor resultante.
*/

#include <stdio.h>

#define QTDL 5
#define QTDC 3

int main(){
    int matriz[QTDL][QTDC], vetor[QTDL*QTDC], count = 0;

    for (int i = 0; i < QTDL; i++){
        for (int j = 0; j <QTDC; j++){
            printf("Digite o elemento de posicao[%d %d]: ",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }


    for(int i = 0; i < QTDL; i++){
        for (int j = 0; j < QTDC; j++){
            if ((matriz[i][j] % 3) == 0){
                vetor[count] = matriz[i][j];
                count++;
            } 
        }
    }
    
    printf("Numeros multiplos de 3 na matriz: ");
    for (int i = 0; i < count; i++){
        printf(" %d;",vetor[i]);
    }

    return 0;
}