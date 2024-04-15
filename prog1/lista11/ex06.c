/*
Implemente uma função recursiva para calcular a soma dos elementos de um array. Por
exemplo, se o array dado for:

int array[10] = {1,2,3,4,5,6,7,8,9,10}

a resposta deve ser 55
*/

#include <stdio.h>
#define TAM 10

int somar(int posicao, int * vetor){
    if(posicao == TAM-1)
        return vetor[TAM-1];

    return vetor[posicao] + somar(posicao+1, vetor);
}

int main(){
    int vetor[TAM] = {1,2,3,4,5,6,7,8,9,10};
    printf("Soma do vetor: %d",somar(0,vetor));
    return 0;
}