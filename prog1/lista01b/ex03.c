/*
O índice de massa corporal (IMC) é usado para identificar o peso ideal de uma pessoa. Ele
é calculado dividindo a massa pelo quadrado da altura. Por exemplo, suponha que uma
pessoa tenha 1,81m de altura e 77kg de massa. O IMC seria:

77 / 1.81² ∼= 23.50

Implemente um programa em C que, dada a massa e altura de uma pessoa, imprima o seu
IMC.

*/

#include <stdio.h>
#include <math.h>

int main(){

    float massa, altura, IMC;

    printf("Calculadora de IMC\n");

    printf("Quanto voce pesa em kilos? ");
    scanf("%f",&massa);

    printf("Qual sua altura? ");
    scanf("%f", &altura);

    IMC = massa / pow(altura,2);

    printf("O seu IMC e: %.1f", IMC);

    return 0;
}