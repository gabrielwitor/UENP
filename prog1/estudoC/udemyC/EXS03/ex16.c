/*
Leia um valor de comprimento em polegadas e apresente-o convertido em centímetros.
A fórmula de conversão é: C = P * 2,54, sendo C o comprimento em centímetros e P o comprimento
em polegadas.
*/

#include <stdio.h>

int main(){

    float c, p;

    printf("Digite o comprimento em polegadas: ");
    scanf("%f",&p);

    c = p * 2.54;

    printf("%.2f polegadas equivalem a %.2f centimetros",p,c);

    return 0;
}