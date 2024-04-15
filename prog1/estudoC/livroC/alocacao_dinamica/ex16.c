/*
Escreva uma função que receba como parâmetro uma matriz A contendo
N linhas e N colunas, e um vetor B de tamanho N. A função deve retornar
o ponteiro para um vetor C de tamanho N alocado dinamicamente, em que
C é o produto da matriz A pelo vetor B.
*/

#include <stdio.h>
#include <stdlib.h>

int ** alocarMatriz(int n){
    int ** mat;
    mat = (int **) malloc (n * sizeof(int *));

    for(int i = 0; i < n; i++){
        mat[i] = malloc (n * sizeof(int));
    }

    return mat;
}

int * alocarVetor(int n){
    int * vet;
    vet = (int *) malloc (n * sizeof(int));
    return vet;
}

int * produtoVetor(int ** mat, int * vetB, int n){
    int * vetorProduto = alocarVetor(n);
    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = 0; j < n; j++){
            sum += mat[i][j];
        }
        vetorProduto[i] = sum * vetB[i];
    }

    return vetorProduto;
}

void preencheMatriz(int ** mat, int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("Digite o elemento [%d][%d]: ",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
}

void preencherVetor(int * vet, int n){
    for(int i = 0; i < n; i++){
        printf("Digite o elemento [%d]: ",i);
        scanf("%d",&vet[i]);
    }
}

void leVetor(int * vet, int n){
    for(int i = 0; i < n; i++){
        printf("Elemento [%d]: %d\n",i,vet[i]);
    }
}

int main(){
    int n, ** mat, * vetB, * vetC;
    printf("Digite o tamanho n: ");
    scanf("%d",&n);

    mat = alocarMatriz(n);
    preencheMatriz(mat, n);

    vetB = alocarVetor(n);
    preencherVetor(vetB, n);

    vetC = produtoVetor(mat, vetB, n);
    leVetor(vetC, n);

    return 0;
}