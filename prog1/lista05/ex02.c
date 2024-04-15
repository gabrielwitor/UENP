/*
Faça um programa que receba do usuário um vetor de “n” números inteiros e, em seguida,
imprima o vetor na ordem inversa.
*/


#include <stdio.h>

void writearray(int array[], int size){
    for (int i = 0; i < size; i++){
        printf("Digite o elemtento numero %d: ",i+1);
        scanf("%d",&array[i]);
    }
}

void readarray(int array[], int size){
    printf("Elementos em ordem inversa: ");
    for (int i = size; i > 0 ; i--){
        printf(" %d;",array[i-1]);
    }
}

int main(){
    int size;
    printf("Digite a quantidade de elementos: ");
    scanf("%d",&size);

    int array[size];

    writearray(array,size);
    readarray(array,size);

    return 0;
}