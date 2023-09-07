/*
Faça um programa que receba do usuário um vetor de “n” números inteiros, em seguida,
implemente uma função que determine e retorne o maior valor do vetor lido.
*/

#include <stdio.h>

int maior(int *vetor, int tam){
    int maior = vetor[0];
    for (int i =0; i < tam; i++){
        maior = (vetor[i] > maior) ? vetor[i] : maior;
    }
    return maior;
}

int main(){
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d",&n);
    int vetor[n];

    for (int i =0; i < n; i++){
        printf("Digite o elemento de index [%d]: ",i);
        scanf("%d",&vetor[i]);
    }

    printf("O maior dos elementos desse vetor de tamanho %d e: %d",n, maior(vetor,n));

    return 0;
}