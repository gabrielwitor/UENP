/*
Faça um programa que leia uma matriz quadrada de tamanho qualquer, calcule e mostre
por meio de uma função, a soma dos elementos que não pertencem a nenhuma das diagonais
– principal e secundária.
*/
#include <stdio.h>

#define QTD 50 //Tamanho máximo da matriz. Utilizado para iniciar matriz.

void lematriz(float matriz[QTD][QTD], int tam){
    for (int i = 0; i < tam; i++){
        for (int j = 0; j < tam; j++){
            printf("Escreva o elemento de posicao [%d %d]: ",i,j);
            scanf("%f",&matriz[i][j]);
        }
    }
}

void soma(float matriz[QTD][QTD], int tam){
    float soma = 0;
    for (int i = 0; i < tam; i++){
        for (int j = 0; j < tam; j++){
            if (i == j || (i + j) == (tam - 1)){
                continue;
            } else {
                soma += matriz[i][j];
            }
        }
    }
    printf("Soma: %.2f",soma);
}

int main(){
    int tam; 
    float matriz[QTD][QTD];
    printf("Digite o tamanho da matriz: ");
    scanf("%d",&tam);

    lematriz(matriz, tam);
    soma(matriz,tam);

    return 0;
}