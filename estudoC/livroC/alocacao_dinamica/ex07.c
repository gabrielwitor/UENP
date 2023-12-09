/*
Faça uma função que retorne o ponteiro para um vetor de N elementos
inteiros alocados dinamicamente. O array deve ser preenchido com valores
de 0 a N − 1.
*/

#include <stdio.h>
#include <stdlib.h>

int * criaVetor(int n){
    int * vetor;
    vetor = (int *) malloc (n * sizeof(int));
    if(vetor == NULL){
        printf("Erro de memória");
        exit(1);
    }

    for(int i = 0; i < n; i++)
        *(vetor+i) = i;
    
    return vetor;
}

void leVetor(int * vetor, int n){
    for(int i = 0; i < n; i++){
        printf("Vetor [%d]: %d\n",i,*(vetor+i));
    }
}

int main(){
    int n;
    do{
        printf("Digite o tamanho (>= 1) do vetor: ");
        scanf("%d",&n);
    }while(n < 1);

    int *vetor = criaVetor(n);
    leVetor(vetor, n);

    return 0;
}