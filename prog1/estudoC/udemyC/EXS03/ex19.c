/*
Leia um valor de volume em litros e apresente-o convertido em metros cúbicos m³.
A fórmula de conversão é: M = L / 1000, sendo L o volume em litros e M o volume
em metros cúbicos.
*/

#include <stdio.h>

int main(){

    float m, l;

    printf("Digite o volume em litros: ");
    scanf("%f",&l);

    m = l / 1000;

    printf("%.2f litros equivalem a %.2fm cubicos",l,m);

    return 0;
}