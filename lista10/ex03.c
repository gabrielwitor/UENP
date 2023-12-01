/*
Implemente um programa que leia uma matriz de inteiros alocada dinamicamente, em que
o número de linhas e o número de colunas são determinados pelo usuário. Verifique quais
elementos da matriz são ímpares e múltiplos de 7. Na sequência, armazene os elementos
identificados em vetor, também alocado dinamicamente, e mostre-os na tela.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int **p, qtd_lin, qtd_col;

    printf("Digite a quantidade de linhas e quantidade de colunas: ");
    scanf("%d %d",&qtd_lin,&qtd_col);

    p = (int **) malloc(qtd_lin * sizeof(int *)); //alocando um array de ponteiros, uma para cada linha

    if(p == NULL){
        printf("Erro: memoria insuficiente.");
        exit(1);
    }

    for(int i = 0; i < qtd_lin; i++){
        p[i] = (int *) malloc(qtd_col * sizeof(int)); // cada ponteiro recebe um array de inteiros
        if(p[i] == NULL){
            printf("Erro: memoria insuficiente.");
            exit(1);
        }
    }

    for(int i = 0; i < qtd_lin; i++)
        for(int j = 0; j < qtd_col; j++){
            printf("Digite o elemento [%d] [%d]: ",i,j); //preenchendo a matriz
            scanf("%d",&p[i][j]);
        }

    printf("\nMatriz: \n");
    for(int i = 0; i < qtd_lin; i++){
        for(int j = 0; j < qtd_col; j++){
            printf("%d ",p[i][j]);
        }
        printf("\n");
    }

    printf("\nElementos ímpares múltiplos de 7:\n");
    for(int i = 0; i < qtd_lin; i++)
        for(int j = 0; j < qtd_col; j++)
            if(p[i][j] % 2 != 0 && p[i][j] % 7 == 0)
                printf("%d ",p[i][j]);
        
    for(int i = 0; i < qtd_col; i++){
        free(p[i]);
    }
    
    free(p);

    return 0;
}