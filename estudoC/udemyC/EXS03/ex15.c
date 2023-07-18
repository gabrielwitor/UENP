/*
Leia um ângulo em radianos e apresente-o convertido em graus. A fórmula de conversão é:
G = R * 180 / pi, sendo G o ângulo em graus e r em radianos. Pi = 3.14;
*/

#include <stdio.h>

int main(){

    float PI = 3.14, r, g;

    printf("Digite o angulo em radianos: ");
    scanf("%f",&r);

    g = r * 180 / PI;

    printf("%.2f graus radianos equivalem a %.2f graus.",r,g);

    return 0;
}