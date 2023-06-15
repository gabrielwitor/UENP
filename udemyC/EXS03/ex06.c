/*
Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit
A fórmula de conversão é: F = C (9.0/5.0) + 32.0, sendo F a temperatura em Fahrenheit
e C a temperatura em Celsius.
*/

#include <stdio.h>

int main(){
    float c, f;

    printf("Digite a temperatura em celsius: ");
    scanf("%f",&c);

    f = (c*(9.0/5.0)) + 32.0;

    printf("%.1f graus Celsius equivalem a %.1f graus Fahrenheit",c,f);
    
    return 0;
}