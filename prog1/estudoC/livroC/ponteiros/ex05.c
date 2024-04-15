/*
Crie um programa que contenha um array de inteiros com cinco elementos.
Utilizando apenas aritmética de ponteiros, leia esse array do teclado e
imprima o dobro de cada valor lido.
*/

#include <stdio.h>

int main(){

    int vetor[5], *p = vetor;

    for(int i = 0; i < 5; i++){
        printf("Digite o elemento %i: ",i);
        scanf("%d",(p+i));
        *(p+i) *= 2;
    }

    for(int i = 0; i < 5; i++){
        printf("\nDigite o elemento %i: %d",i,*(p+i));
    }

}

