/*
Escreva um programa que aloque dinamicamente uma matriz de inteiros.
As dimensões da matriz deverão ser lidas do usuário. Em seguida, escreva
uma função que receba um valor e retorne 1, caso o valor esteja na matriz,
ou retorne 0, no caso contrário.
*/

#include <stdio.h>
#include <stdlib.h>

int ** alocaMatriz(int linha, int coluna){
    int **mat;

    mat = (int **) malloc (linha * sizeof(int *));

    if(mat == NULL){
        printf("Erro de memória.\n");
        exit(1);
    }

    for(int i = 0; i < linha; i++){
        mat[i] = (int *) malloc (coluna * sizeof(int));
    }

    return mat;
}

void preencheMatriz(int ** mat, int linha, int coluna){
    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            printf("Digite o valor do elemento [%d][%d]: ",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
}

void leMatriz(int ** mat, int  linha, int coluna){
    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
}

int encontraNumero(int ** mat, int numero, int linha, int coluna){
    for(int i = 0; i < linha; i++)
        for(int j = 0; j < coluna; j++)
            if(mat[i][j] == numero)
                return 1;
    return 0;
} 

int main(){
    int linha, coluna, **mat;

    do{
        printf("Digite a quantidade de linhas e colunas [>= 0]: ");
        scanf("%d %d",&linha,&coluna);
    } while (linha < 1 || coluna < 1);

    mat = alocaMatriz(linha,coluna);

    preencheMatriz(mat, linha, coluna);
    leMatriz(mat, linha, coluna);

    int numero;

    printf("Digite um valor: ");
    scanf("%d",&numero);

    (encontraNumero(mat,numero,linha,coluna)) ? printf("O numero está presente na matriz.") : printf("O numero não está presente na matriz.");

    return 0;
}