/*
Faça um programa que receba um vetor de 20 elementos inteiros, em seguida, percorra o
vetor através do ponteiro ptr-inicio - a partir do início do vetor e outro ponteiro ptr-fim
a partir do final do vetor, até os dois ponteiros se encontrarem no meio do vetor.
*/

#include <stdio.h>

#define MAXSIZE 20

int main(){
    int vetor[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
    int *ptr_inicio = vetor, *ptr_fim = &vetor[MAXSIZE-1];

    do{
        printf("%d %d\n",*ptr_inicio,*ptr_fim);
        ptr_inicio++, ptr_fim--;

    } while (ptr_inicio<ptr_fim);

    return 0;
}