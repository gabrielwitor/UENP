/*
Leia uma velocidade em km/h (quilômetros por hora) e apresente-a convertida em m/s
(metros por segundo). A fórmula de conversão é: M = K/3.6, sendo K a velocidade em km/h e
M em m/s.
*/

#include <stdio.h>

int main(){
    float k, m;

    printf("Digite a velocidade em km/h: ");
    scanf("%f",&k);
    
    m = k/3.6;

    printf("%.2f km/h = %.2f m/s",k,m);

    return 0;
}