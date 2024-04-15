/*
Leia uma velocidade em m/s e apresente-a convertida em km/h. 
A fórmula de conversão é K = M * 3.6, sendo K
a velocidade em km/h e M em m/s.
*/

#include <stdio.h>

int main(){
    float m, k;

    printf("Digite a velocidade em m/s: ");
    scanf("%f",&m);

    k = m * 3.6;

    printf("%.1f m/s = %.1f km/h",m,k);

    return 0;
}