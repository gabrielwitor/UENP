/*
Modifique o exercício 1 de modo que a funçao recursiva calcule a soma dos elementos do
array começando do último elemento até o primeiro.
*/

#include <stdio.h>
#define TAM 10

int somar(int posicao, int * vetor){
    if(posicao == 0)
        return vetor[0];

    return vetor[posicao] + somar(posicao-1, vetor);
}

int main(){
    int vetor[TAM] = {1,2,3,4,5,6,7,8,9,10};
    printf("Soma do vetor: %d",somar(TAM-1,vetor));
    return 0;
}