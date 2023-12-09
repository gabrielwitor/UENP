/*
Escreva uma função que receba um valor inteiro positivo N por parâmetro
e retorne o ponteiro para um vetor de tamanho N alocado dinamicamente.
Se N for negativo ou igual a zero, um ponteiro nulo deverá ser retornado.
*/

#include <stdio.h>
#include <stdlib.h>

int * alocaVetor(int n){
    int * vetor;

    if (n <= 0){
        return NULL;
    } else{
        vetor = (int *) malloc (n * sizeof(int));
    }

    if(vetor == NULL){
        printf("Erro na memória");
        exit(1);
    }

    return vetor;    
}

int main(){
    int n, * vetor;
    printf("Digite um valor n: ");
    scanf("%d",&n);

    vetor = alocaVetor(n);

    (vetor == NULL) ? printf("Não foi possível alocar o vetor.") : printf("Vetor alocado com sucesso.");

    return 0;
}