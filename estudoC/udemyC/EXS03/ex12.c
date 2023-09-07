/*
Leia uma distância em milhas e apresente-a convertida em quilômetros. A fórmula de
conversão é: K = 1,61 * M, sendo K a distância em quilômetros e M a distância em milhas.
*/

#include <stdio.h>

int main(){
    float m, k;

    printf("Digite a distancia em milhas:");
    scanf("%f",&m);

    k = 1.61 * m;

    printf("%.1f milhas equivalem a %.1f quilometros",m,k);

    return 0;
}