/*
Aula do dia 05/07/2023

Declaração de funções em C

Faça uma função que receba o raio de um círculo e retorne a sua
área. A área do círculo é dada por PI * r². Dica: usa a biblioteca math.h,
com a função pow().
*/

#include <stdio.h>
#include <math.h>

float area(){
    float pi = 3.1415;
    float raio;
    printf("Digite o raio: ");
    scanf("%f",&raio);
    return pi*pow(raio,2);
}

int main(){
    printf("Area: %.2f",area());
    return 0;
}