/*
Faça um programa que leia uma matriz quadrada com valores inteiros com dimensão
definida pelo usuário, leia uma constante x e, através de uma função, multiplique os
elementos da diagonal secundária da matriz com essa constante. Ao final, o programa
deve exibir a matriz resultante.
*/

#include <stdio.h>

#define QTD 100 //Tamanho máximo da matrix. Utilizada para inicialização da matrix.

void escevematriz(int matriz[QTD][QTD], int tam){
    for (int i = 0; i < tam; i++){
        for (int j = 0; j < tam; j++){
            printf("Digite o elemento de posicao [%d %d]: ",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }
}

void multdiagsec(int matriz[QTD][QTD], int tam, int mult){
    int j = tam - 1;
    for (int i = 0; i < tam; i++){
        matriz[i][j] *= mult;
        j--;
    }
}

void lematriz(int matriz[QTD][QTD], int tam){
    for(int i = 0; i < tam; i++){
        for (int j = 0; j < tam; j++){
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int tam, mult;

    printf("Digite o tamanho da matriz: ");
    scanf("%d",&tam);

    printf("Digite a constante pela qual sera multiplicada a diagonal secundaria: ");
    scanf("%d",&mult);

    int matriz[QTD][QTD];

    escevematriz(matriz, tam);
    printf("Matriz original: \n");
    lematriz(matriz,tam);

    multdiagsec(matriz,tam,mult);
    printf("Matriz com diagonal secundaria multiplicada por %d: \n",mult);
    lematriz(matriz,tam);

    return 0;
}