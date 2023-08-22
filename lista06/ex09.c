/*
Faça um programa que receba as dimensões e os elementos de uma matriz, gere e exiba a
sua transposta.
*/
#include <stdio.h>

int main(){
    int tam1,tam2;
    printf("Digite as dimensoes da matriz: [linhas colunas]: ");
    scanf("%d %d",&tam1,&tam2);

    float matriz[tam1][tam2], transposta[tam2][tam1];

    for (int i = 0; i < tam1; i++){
        for (int j = 0; j < tam2; j++){
            printf("Digite o elemento de posicao [%d %d]: ",i,j);
            scanf("%f",&matriz[i][j]);
            transposta[j][i] = matriz[i][j];
        }
    }

    printf("Matriz transposta: \n");
    for(int i = 0; i < tam2; i++){
        for (int j = 0; j < tam1; j++){
            printf("%.2f   ",transposta[i][j]);
        }
        printf("\n");
    }

    return 0;
}