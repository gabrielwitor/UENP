/*
Uma locadora de carros está fazendo uma promoção e está alugando carros no período junino
por R$ 30,00 a diária. Além disso, a locadora cobra R$ 0,01 por quilômetro rodado. Como
é período de São João, a locadora quer fidelizar os clientes e está dando 10% de desconto
no valor total do aluguel de qualquer carro.

Implemente um programa em C que leia quantos dias a pessoa ficou com o carro: [1; 30]
e quantos kilômetros ela rodou [1; 1000] , calcule e mostre o valor total que a pessoa deve
pagar pelo aluguel do carro.

*/

#include <stdio.h>

int main(){

    int dias;
    float quilometros;
    
    printf("Quantos dias voce ficou com o carro: ");
    scanf("%d",&dias);

    printf("Quantos quilometros voce rodou: ");
    scanf("%f",&quilometros);

    printf("Voce deve pagar R$%.2f pelo aluguel do veiculo", dias * 30 + quilometros * 0.01);

    return 0;
}