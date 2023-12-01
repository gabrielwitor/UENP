/*
Implemente um programa que leia duas matrizes de inteiros m1 e m2 de ordem M x N e
preencha uma terceira matriz soma que e resultado da soma de m1 e m2. As matrizes devem
ser alocadas dinamicamente. Não esqueça de verificar se é possível fazer a alocação de
memória.
*/

#include <stdio.h>
#include <stdlib.h>

void preencher(int N, int M, int ** matriz){
    for(int i = 0; i < M; i++)
        for(int j = 0; j < N; j++){
            printf("Digite o elemento [%d] [%d]: ",i,j); //preenchendo a matriz
            scanf("%d",&matriz[i][j]);
        }
}

void imprimir(int N, int M, int ** matriz){
    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            printf("%d ",matriz[i][j]); //lendo a matriz
        }
        printf("\n");
    }
}

void somar(int N, int M, int **matriz1, int **matriz2, int**matriz_soma){
    for(int i = 0; i < M; i++)
        for(int j = 0; j < N; j++)
           matriz_soma[i][j] = matriz1[i][j] + matriz2[i][j];
}

int main(){
    int **p1, **p2, **psoma, M, N;

    printf("Digite a quantidade de linhas e quantidade de colunas: ");
    scanf("%d %d",&M,&N);

    p1 = (int **) malloc(M * sizeof(int *)); //alocando um array de ponteiros, uma para cada linha
    p2 = (int **) malloc(M * sizeof(int *));
    psoma = (int **) malloc(M * sizeof(int *));

    if(p1 == NULL || p2 == NULL || psoma == NULL){
        printf("Erro: memoria insuficiente.");
        exit(1);
    }

    for(int i = 0; i < M; i++){
        p1[i] = (int *) malloc(N * sizeof(int)); // cada ponteiro recebe um array de inteiros
        p2[i] = (int *) malloc(N * sizeof(int));
        psoma[i] = (int *) malloc(N * sizeof(int)); 
        if(p1[i] == NULL || p2[i] == NULL || psoma[i] == NULL){
            printf("Erro: memoria insuficiente.");
            exit(1);
        }
    }

    printf("\nMatriz 1:\n");
    preencher(N,M,p1);
    printf("\n");
    imprimir(N,M,p1);

    printf("\nMatriz 2:\n");
    preencher(N,M,p2);
    printf("\n");
    imprimir(N,M,p2);

    somar(N, M, p1, p2, psoma);
    printf("\nMatriz soma:\n\n");
    imprimir(N,M,psoma);

    return 0;
}