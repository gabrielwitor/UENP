/*
Elabore um programa que leia do usuário o tamanho de um vetor a ser
lido. Em seguida, faça a alocação dinâmica desse vetor. Por fim, leia o vetor
do usuário e o imprima.
*/
#include <stdio.h>
#include <stdlib.h>

int * alocaVetor(int n){
    int * vetor;
    vetor = (int *) malloc (n * sizeof(int));
    if(vetor == NULL){
        printf("Erro de memória.");
        exit(1);
    }
    return vetor;
}

void preencheVetor (int n, int * vetor){
    for(int i = 0; i < n; i++){
        printf("Digite o elemento [%d]: ",i);
        scanf("%d",(vetor+i));
    }
}

void leVetor (int n, int * vetor){
    for(int i = 0; i < n; i++){
        printf("Elemento [%d]: %d\n",i,*(vetor+i));
    }
}

int main(){
    int n;
    
    printf("Digite o tamanho do vetor: ");
    scanf("%d",&n);

    int * vetor = alocaVetor(n);

    preencheVetor(n, vetor);

    leVetor(n, vetor);


    return 0;
}