/*
Crie uma função que receba dois parâmetros: um vetor e um valor do
mesmo tipo do vetor. A função deverá preencher os elementos de vetor
com esse valor. Não utilize índices para percorrer o vetor, apenas aritmética
de ponteiros.
*/

#include <stdio.h>

void preenchevetor(int n, int * p){
    for(int i = 0; i < sizeof(p); i++){
        *p = n;
    }
}

void levetor(int * p){
    for(int i = 0; i < sizeof(p); i++){
        printf("Elemento [%d]: %d\n",i,*p);
    }
}

int main(){
    int array[10], n;

    printf("Digite um numero: ");
    scanf("%d",&n);

    preenchevetor(n, array);

    levetor(array);

    return 0;
}