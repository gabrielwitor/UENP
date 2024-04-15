/*
Implemente uma funçao que receba como parâmetro um valor n e retorne o ponteiro para
uma matriz alocada dinamicamente contendo n linhas e n colunas. Preencha a matriz com
o valor 1 na diagonal secundária e 0 nas demais posições.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, ** mat;

    printf("Digite o tamanho da matriz quadrada: ");
    scanf("%d",&n);

    mat = (int **) malloc (n * sizeof(int *));

    if(mat == NULL){
        printf("Memória insuficiente");
        exit(1);
    }

    for(int i = 0; i < n; i++){
        mat[i] = (int *) malloc (n * sizeof(int));
        if(mat[i] == NULL){
            printf("Memória insuficiente");
            exit(1);
        }
    }

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            if(i + j == n - 1){
                mat[i][j] = 1;
            } else {
                mat[i][j] = 0;
            }
    
    for(int i = 0; i < n; i++){
        printf("\n");
        for(int j = 0; j < n; j++){
            printf("%d ",mat[i][j]);
        }
    }

    return 0;
}