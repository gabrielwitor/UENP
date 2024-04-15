/*
Faça um programa que leia uma matriz quadrada com dimensão definida pelo usuário. Em
seguida, implemente uma função que calcule e mostre a soma dos elementos que estão acima
da diagonal principal.
*/

#include <stdio.h>

int main(){
    int qtd;
    
    printf("Digite a quantidade de linhas e a quantidade de colunas da matriz quadrada: ");
    scanf("%d",&qtd);

    float matriz[qtd][qtd], soma = 0;

    for (int i = 0; i < qtd; i++){
        for (int j = 0; j < qtd; j++){
            printf("Digite o elemento de posicao[%d %d]: ",i,j);
            scanf("%f",&matriz[i][j]);
        }
    }

    for (int i = 0; i < qtd; i++){
        for (int j = 0; j < qtd; j++){
            if (j > i){
                soma += matriz[i][j];
            }
        }
    }

    printf("Soma: %.2f",soma);

    return 0;
}