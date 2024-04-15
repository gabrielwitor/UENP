/*
Implemente um programa em C leia quatro valores inteiros A, B, C e D. A seguir, calcule
e mostre a diferença do produto de A e B pelo produto de C e D.
*/

#include <stdio.h>

int main(){

    float a, b, c, d;

    printf("Digite os valores de A, B, C e D: ");
    scanf("%f%f%f%f",&a,&b,&c,&d);

    printf("A diferença do produto de A e B pelo produto de C e D e: %.1f",(a*b) - (c*d));

    return 0;
}