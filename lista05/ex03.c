/*
Faça um programa que leia 50 números inteiros e armazene em um vetor. Em seguida,
armazene os números pares no vetor chamado par e os números ímpares no vetor ímpar.
Imprima os dois vetores resultante.
*/

#include <stdio.h>
#define TAM 50

int main(){
    int vetor[TAM], vetorpar[TAM], vetorimp[TAM], iteradorpar = 0, iteradorimp  = 0;

    for(int i = 0; i < TAM; i++){
        printf("Digite o numero %d da lista: ",i+1);
        scanf("%d",&vetor[i]);

        if(vetor[i] % 2 == 0){
            vetorpar[iteradorpar] = vetor[i];
            iteradorpar++;
        } else { 
            vetorimp[iteradorimp] = vetor[i];
            iteradorimp++;
        }
        
    }

    printf("\nNumeros pares: ");
    for(int i = 0; i < iteradorpar; i++){
        printf("%d ", vetorpar[i]);
    }

    printf("\nNumeros impares:");
    for(int i = 0; i < iteradorimp; i++){
        printf("%d ", vetorimp[i]);
    } 

    return 0;
}