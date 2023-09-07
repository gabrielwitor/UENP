/*
Faça um programa que leia uma sequência de números qualquer e armazene em um vetor,
em seguida, implemente uma função que contabilize e retorne o total de ocorrências do
último número lido desta sequência.
*/

#include <stdio.h>

int main(){
    int size, occurrences = 0;   

    printf("Escreva a quantidade de numeros da sequencia: ");
    scanf("%d",&size);

    int array[size];

    for (int i = 0; i < size ; i++){
        printf("Digite o elemento numero %d: ",i+1);
        scanf("%d",&array[i]);
    }

    for (int i = 0; i < size; i++){
        if (array[i] == array[size-1]){
            occurrences++;
        }
    }

    printf("%d aparece %d vezes na lista.",array[size-1],occurrences);

    return 0;
}