/*
Implemente um programa que leia um vetor de inteiros A de 20 elementos e guarde tais
valores em um arquivo, um por linha. Depois, reabra o arquivo e leia os elementos para o
vetor B, verificando se os valores foram gravados corretamente.
*/

#include <stdio.h>
#include <stdlib.h>

void escreverArquivo(int * vetorA){
    FILE * arquivo;
    arquivo = fopen("vetor.txt","w");

    for(int i = 0; i < 20; i++){
        fprintf(arquivo,"%d\n",vetorA[i]);
    }
    fclose(arquivo);
}

void lerArquivo(int * vetorB){
    FILE * arquivo;
    arquivo = fopen("vetor.txt","r");

    for(int i = 0; i < 20; i++){
        fscanf(arquivo,"%d",&vetorB[i]);
    }
    fclose(arquivo);
}

int main(){
    int vetorA[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};

    escreverArquivo(vetorA);

    int vetorB[20];

    lerArquivo(vetorB);

    for(int i = 0; i < 20; i++){
        printf("%d ",vetorB[i]);
    }

    return 0;
}