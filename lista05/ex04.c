/*
Faça um programa que leia uma sequência de 21 números inteiros e armazene em um vetor.
Depois, determine se o último número lido está presente nos 20 primeiros e mostre as
posições do vetor em que ele se encontra.
*/

#include <stdio.h>
#define QTD 21

int main(){
    int vetor[QTD];
    for (int i = 0; i < QTD; i++){
        printf("Digite o numero de posicao %d: ",i);
        scanf("%d",&vetor[i]);
    }

    printf("O elemento %d e encontrado nas posicoes: ",vetor[QTD-1]);

    for (int i = 0; i < QTD; i++){
        if (vetor [i] == vetor[QTD-1]){
            printf("%d ",i);
        }
    }

    return 0;
}