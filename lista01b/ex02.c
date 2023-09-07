/*
A área do triângulo é dada por:

base * altura / 2

Implemente um programa em C que receba a base e a altura de um triângulo e imprima a sua área.
*/

#include <stdio.h>

int main(){

    float base, altura, area;

    printf("Digite o tamanho da base do triangulo: ");
    scanf("%f",&base);

    printf("Digite o tamanho da altura do triangulo: ");
    scanf("%f",&altura);

    area = (base*altura)/2;

    printf("O triangulo de base %.1f e altura %.1f tem area %.1f",base,altura,area);

    return 0;
}