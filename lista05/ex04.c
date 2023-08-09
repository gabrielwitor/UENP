/*
Faça um programa que leia uma sequência de 21 números inteiros e armazene em um vetor.
Depois, determine se o último número lido está presente nos 20 primeiros e mostre as
posições do vetor em que ele se encontra.
*/

#include <stdio.h>
#define TAM 21

int main(){
    int vetor[TAM];
    for (int i = 0; i < TAM; i++){
        printf("Digite o numero de posicao %d: ",i);
        scanf("%d",&vetor[i]);
    }

    printf("O elemento %d e encontrado nas posicoes: ",vetor[TAM-1]);

    for (int i = 0; i < TAM; i++){
        if (vetor [i] == vetor[TAM-1]){
            printf("%d",i);
        }
    }

    return 0;
}