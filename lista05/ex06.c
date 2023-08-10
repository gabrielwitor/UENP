/*
Faça um programa que leia uma sequência de números inteiros e armazene em um vetor.
Em seguida, implemente uma função que determine e mostre os números do vetor que são múltiplos de 7
*/

#include <stdio.h>

void verificamult(int *vetor,int tam){
    for (int i = 0; i < tam; i++){
        if (vetor[i] % 7 ==0 && vetor[i] != 0)
            printf("%d e multiplo de 7.\n",vetor[i]);
    }
}

int main(){

    int tam;
    printf("Digite a quantidade de elementos da lista: ");
    scanf("%d",&tam);
    int vetor[tam];
    for (int i = 0; i < tam; i++){
        printf("Digite o elemento de index [%d]: ",i);
        scanf("%d",&vetor[i]);
    }

    verificamult(vetor,tam);

    return 0;
}