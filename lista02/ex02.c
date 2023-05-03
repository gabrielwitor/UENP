/*
Faça um programa que receba como entrada três números inteiros e, em seguida, exiba o menor deles.
*/

#include <stdio.h>

int main(){
    int a, b, c, menor;
    
    printf("Digite tres valores:");
    scanf("%i%i%i",&a,&b,&c);

    menor = (a > b) ? b : a;
    menor = (menor > c) ? c : menor;

    printf("O menor dos valores e: %i",menor);

    return 0;
}
