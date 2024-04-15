/*
Implemente uma funçao que receba um vetor de inteiros, o tamanho do vetor e um inteiro
pos passado por referência. A função retorna o maior elemento do vetor e, na variável pos,
a posição do maior elemento do vetor.
*/

#include <stdio.h>

#define MAXSIZE 10

void IndiceMaiorElemento(int *vet,int *pos);

int main(){
    int vet[10] = {0,1,2,3,4,5,6,7,8,9}, pos;

    IndiceMaiorElemento(vet, &pos);

    printf("Indice do elemento de maior valor: %d",pos);


    return 0;
}

void IndiceMaiorElemento(int *vet,int *pos){
    int posMaiorElemento = 0;

    for(int i = 0; i < MAXSIZE; i++)
        posMaiorElemento = (vet[posMaiorElemento] < vet[i]) ? i : posMaiorElemento;
    
    *pos = posMaiorElemento;
}