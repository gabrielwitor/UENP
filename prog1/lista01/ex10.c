/*
Faça um programa que receba a distância total percorrida em km e o total de combustível
gasto em litros, calcule e mostre o consumo médio de um veículo.
*/

#include <stdio.h>

int main(){

    float distancia, combustivel;

    printf("Digite a distancia percorrida em km: ");
    scanf("%f",&distancia);

    printf("Digite o combustivel gasto em litros: ");
    scanf("%f",&combustivel);

    printf("O consumo medio de combustivel do veiculo e de: %.1f km/l",distancia/combustivel);

    return 0;
}