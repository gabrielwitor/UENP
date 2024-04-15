/*
Leia uma temperatura em graus Fahrenheit e apresente-a convertida em graus Celsius
A fórmula de conversão é: C = 5.0 * (F - 32) / 9.0, sendo F a temperatura em Fahrenheit
e C a temperatura em Celsius.
*/

#include <stdio.h>

int main(){
    float c, f;

    printf("Digite a temperatura em graus Fahrenheit: ");
    scanf("%f",&f);

    c = (5 * (f - 32.0)) / 9.0;
    
    printf("%.1f graus Fahrenheit equivalem a %.1f graus Celsius",f,c);

    return 0;
}