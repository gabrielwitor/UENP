/*
Faça um programa que calcule e exiba o valor de S, em que S é dado por:

S = 1/1 + 3/2 + 5/3 + 7/4 + ... + 99/50
*/

#include <stdio.h>

int main(){
    float divisor = 1, dividendo = 1, soma = 0;

    for (; divisor <= 50 ; divisor++){
        soma += (dividendo/divisor);
        dividendo += 2;
    }

    printf("\nResultado da soma S: %.2f",soma);

    return 0;
}