/*
Implemente um programa que leia uma matriz de inteiros alocada dinamicamente com
dimensões definidas pelo usuário. Em seguida, implemente uma função responsável por
buscar um numero n na matriz. A funçao deve retornar 1, caso encontre n na matriz ou 0,
caso contrário. O protótipo da função é a seguinte:

int buscaNumero(int numero, int ** array, int linha, int coluna) { .. }
*/

#include <stdio.h>
#include <stdlib.h>

void insere(int ** mat, int qtd_lin, int qtd_col){
    printf("\n");
    for(int i = 0; i < qtd_lin; i++){
        for(int j = 0; j < qtd_col; j++){
            printf("Digite o elemento [%d][%d]: ",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
}

void imprime(int ** mat, int qtd_lin, int qtd_col){
    printf("\n");
    for(int i = 0; i < qtd_lin; i++){
        for(int j = 0; j < qtd_col; j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int buscaNumero(int numero, int ** mat, int qtd_lin, int qtd_col){
    for(int i = 0; i < qtd_lin; i++)
        for(int j = 0; j < qtd_col; j++)
            if(numero == mat[i][j]){
                return 1;
            }
    return 0;
}

int main(){
    int qtd_lin, qtd_col, **mat;

    printf("Quantidade de linhas e colunas da matriz: ");
    scanf("%d%d",&qtd_lin,&qtd_col);

    mat = (int **) malloc(qtd_lin * sizeof(int *));

    if(mat == NULL){
        printf("Memória insuficiente");
        exit(1);
    }

    for(int i = 0; i < qtd_lin; i++){
        mat[i] = (int *) malloc(qtd_col * sizeof(int));
        if(mat[i] == NULL){
            printf("Memória insuficiente");
            exit(1);
        }
    }

    insere(mat, qtd_lin, qtd_col);
    imprime(mat, qtd_lin, qtd_col);

    int n;

    printf("Digite um número: ");
    scanf("%d",&n);

    if(buscaNumero(n, mat, qtd_lin, qtd_col)){
        printf("\n%d está na matriz.",n);
    } else {
        printf("\n%d não está na matriz.",n);
    }

    return 0;
}