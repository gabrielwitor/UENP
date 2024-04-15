/*
Faca uma funcao que receba como parametros uma matriz de inteiros e seu tamanho e
grave-a em um arquivo texto. Cada linha da matriz deve ser salva em uma linha do
arquivo.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int tamanhoL, tamanhoC, ** matriz;

    FILE * arquivo;

    arquivo = fopen("matrix.txt","w");

    printf("Digite a quantidade de linhas:");
    scanf("%d",&tamanhoL);
    printf("Digite a quantidade de colunas:");
    scanf("%d",&tamanhoC);

    matriz = (int **) malloc (tamanhoL * sizeof(int *));

    for(int i = 0; i < tamanhoC; i++)
        matriz[i] = (int *) malloc (tamanhoC * sizeof(int));
    
    for(int i = 0; i < tamanhoL; i++){
        for(int j = 0; j < tamanhoC; j++){
            printf("Digite o elemento [%d][%d]: ",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }

    for(int i = 0; i < tamanhoL; i++){
        for(int j = 0; j < tamanhoC; j++){
            fprintf(arquivo,"%d ",matriz[i][j]);
        }
        fprintf(arquivo,"\n");
    }

    fclose(arquivo);
    return 0;
}

