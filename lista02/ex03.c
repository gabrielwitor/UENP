/*
Faça um programa que receba como entrada três números positivos em ponto flutuante, em seguida,
mostre quantos deles estão acima da média aritmética.
*/

#include <stdio.h>

int main(){

    float a, b, c, mediaAritmetica;
    int acimaMediaAritmetica = 0;

    printf("Digite tres valores positivos em ponto flutuante: ");
    scanf("%f%f%f", &a, &b, &c);

    mediaAritmetica = (a+b+c) / 3;

    if (a > mediaAritmetica){
        acimaMediaAritmetica += 1;
    }
    
    if (b > mediaAritmetica){
        acimaMediaAritmetica += 1;
    }

    if (c > mediaAritmetica){
        acimaMediaAritmetica += 1;
    }

    printf("%i valores estao acima da media aritmetica.",acimaMediaAritmetica);

    return 0;
}