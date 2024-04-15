/*
Escreva uma função que receba como parâmetro uma matriz A contendo
N linhas e N colunas. A função deve retornar o ponteiro para um vetor B
de tamanho N alocado dinamicamente, em que cada posição de B é a soma
dos números daquela coluna da matriz
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,** mat, *vet;

    printf("Digite o valor n: ");
    scanf("%d",&n);

    mat = (int **) malloc (n * sizeof(int *));

    for(int i = 0; i < n; i++){
        mat[i] = (int *) malloc (n * sizeof(int)); 
    }

    vet = (int *) malloc (n * sizeof(int));

    for(int i = 0; i < n; i++){
        int soma = 0;
        for(int j = 0; j < n; j++){
            printf("Digite o valor do elemento [%d][%d]: ",i,j);
            scanf("%d",&mat[i][j]);
            soma += mat[i][j];
        }
        vet[i] = soma;
    }

    for(int i = 0; i < n; i++){
        printf("Vetor [%d]: %d\n",i,vet[i]);
    }

    return 0;
}