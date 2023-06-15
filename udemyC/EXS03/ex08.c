/*
Leia uma temperatura em graus Kelvin e apresente-a convertida em graus Celsius
A fórmula de conversão é: C = K - 273.15, sendo C a temperatura em Celsius
e K a temperatura em Kelvin.
*/

#include <stdio.h>

int main(){
    float c, k;

    printf("Digite a quantidade de graus em Kelvin: ");
    scanf("%f",&k);

    c = k - 273.15;

    printf("%.1f graus Kelvin equivalem a %.1f graus Celsius",k,c);

    return 0;
}