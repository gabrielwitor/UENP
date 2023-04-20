/*
Faça um programa que leia dois valores x e y e permute o conteúdo das duas variáveis,
ou seja, o valor de x ser armazenado em y e vice-versa. Ao final, mostre o conteúdo das
variáveis.
*/

#include <stdio.h>

int main(){

    float x,y,inversorx,inversory;

    printf("Digite o valor de x: ");
    scanf("%f",&x);
    
    printf("Digite o valor de y: ");
    scanf("%f",&y);

    inversorx = x;
    inversory = y;

    x = inversory;
    y = inversorx;

    printf("Invertendo...\n");
    printf("Valor de x: %.1f\n",x);
    printf("Valor de y: %.1f",y);

    return 0;
}