/*
Faça um programa que receba um vetor de 20 elementos e, em seguida, efetue a troca dos
10 primeiros elementos pelos 10  ́ultimos, exibindo ao final o vetor resultante.
*/

#include <stdio.h>
#define TAM 20

int main(){
    int vetor[TAM], aux;
    for (int i = 0; i < TAM; i++){
        printf("Digite o elemento de indice %d: ",i);
        scanf("%d",&vetor[i]);
    }

    for (int i = 0; i < (TAM/2); i++){
        aux = vetor[i+(TAM/2)];
        vetor[i+(TAM/2)] = vetor[i];
        vetor[i] = aux;
    }

    for (int i = 0; i < TAM; i++){
        printf("%d ",vetor[i]);
    }

    return 0;
}