/*
Faça um programa que leia o preço de um produto em reais, a taxa de conversão para o
dólar e para o euro e, em seguida, converta o valor de acordo com as taxas fornecidas.
*/

#include <stdio.h>

int main(){

    float precoEmReal, cotacaoDolar, cotacaoEuro;
    
    printf("Digite o valor do produto em reais:\n");
    scanf("%f",&precoEmReal);

    printf("Digite o valor de 1 dolar em real:\n");
    scanf("%f",&cotacaoDolar);

    printf("Digite o valor de 1 euro em real:\n");
    scanf("%f",&cotacaoEuro);

    printf("Valor em dolar: %.2f\n",(precoEmReal/cotacaoDolar));
    printf("Valor em euro: %.2f",(precoEmReal/cotacaoEuro));

    return 0;
}