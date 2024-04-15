/*
Leia um ângulo em graus e apresente-o convertido em radianos. A fórmula de conversão
é: R = G * pi / 180, sendo G o ângulo em graus e R em radianos. pi = 3.14
*/

#include <stdio.h>

int main(){
    float PI = 3.14, r,g;

    printf("Digite o angulo em graus: ");
    scanf("%f",&g);

    r = g * PI /180;

    printf("%.2f graus equivalem a %.2f graus radianos.",g,r);

    return 0;
}