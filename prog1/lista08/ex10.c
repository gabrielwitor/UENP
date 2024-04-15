/*
Faça um programa que leia uma matriz quadrada de ordem 4 X 4 de números inteiros.
Depois, leia um número x e verifique quantas vezes x aparece na matriz.
*/

#include <stdio.h>

#define MAXSIZE 4

int main(){
    int matrix[MAXSIZE][MAXSIZE], * ptr = &matrix[0][0];
    
    for(int i = 0; i < MAXSIZE*MAXSIZE; i++){
        printf("Digite o elemento numero [%d]: ",i+1);
        scanf("%d",(ptr+i));
    }

    int x, count = 0;
    printf("Digite um valor inteiro: ");
    scanf("%d",&x);

    ptr = &matrix[0][0];

    for(int i = 0; i < MAXSIZE*MAXSIZE; i++)
        if(*(ptr+i) == x)
            count++;

    printf("O numero [%d] aparece [%d] vezes na matriz.",x,count);

    return 0;
}