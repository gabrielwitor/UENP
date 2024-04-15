/*
Faça um programa que leia um valor inteiro N não negativo. Se o valor de
N for inválido, o usuário deverá digitar outro até que ele seja válido (ou
seja, positivo). Em seguida, leia um vetor V contendo N posições de
inteiros, em que cada valor deverá ser maior ou igual a 2. Esse vetor deverá
ser alocado dinamicamente.
*/

#include <stdio.h>
#include <stdlib.h>

int * alocarVetor(int n){
    int * vetor;
    vetor = (int *) malloc (n * sizeof(int));
    if (vetor == NULL){
        printf("Erro de memória.\n");
        exit(1);
    }
    return vetor;
}

void preencheVetor(int n, int * vetor){
    int entrada;
    for(int i = 0; i < n; i++){
        do
        {
            printf("\nDigite o valor (maior ou igual a 2) do elemento [%d]: ",i);
            scanf("%d",&entrada);
        } while (entrada < 2);
        *(vetor+i) = entrada;
    }
}

void leVetor(int n, int * vetor){
    for(int i = 0; i < n; i++){
        printf("Elemento [%d]: %d\n",i,*(vetor+i));
    }
}

int main(){
    int n;
    
    do{
        printf("\nDigite um valor N não negativo: ");
        scanf("%d",&n);
    } while (n < 0);

    int *v = alocarVetor(n);

    preencheVetor(n, v);
    leVetor(n,v);

    return 0;
}