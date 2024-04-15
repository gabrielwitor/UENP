/*
Leia uma distância em quilômetros e apresente-a convertida em milhas.
A fórmula de conversão é: M = K / 1,61, sendo K a distância em quilômetros e M a distância em milhas.
*/

#include <stdio.h>

int main(){

    float k, m;

    printf("Digite a distancia em quilometros: ");
    scanf("%f",&k);

    m = k / 1.61;

    printf("%.2f quilometros equivalem a %.2f milhas",k,m);

    return 0;
}