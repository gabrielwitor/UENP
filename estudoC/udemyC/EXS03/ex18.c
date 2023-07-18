/*
Leia um valor de volume em metros cúbicos m³ e apresente-o convertido em litros.
A fórmula de conversão é: L = 1000 * M, sendo L o volume em litros e M o volume
em metros cúbicos
*/

#include <stdio.h>

int main(){

    float m, l;

    printf("Digite o volume em metros cubicos: ");
    scanf("%f",&m);

    l = 1000 * m;

    printf("%.2f metros cubicos = %.2f litros",m,l);

    return 0;
}