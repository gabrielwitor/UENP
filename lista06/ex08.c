/*
Faça um programa que leia uma matriz quadrada de tamanho qualquer, calcule e mostre
por meio de uma função, a soma dos elementos que não pertencem a nenhuma das diagonais
– principal e secundária.
*/
#include <stdio.h>

void lematriz(int tam, float matriz[tam][tam]){
    for (int i = 0; i < tam; i++){
        for (int j = 0; j < tam; j++){
            printf("Escreva o elemento de posicao [%d %d]: ",i,j);
            scanf("%f",&matriz[i][j]);
        }
    }
}

void soma(int tam, float matriz[tam][tam]){
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
    
    printf("Digite o tamanho da matriz: ");
    scanf("%d",&tam);

    float matriz[tam][tam];

    lematriz(tam, matriz);
    soma(tam, matriz);

    return 0;
}