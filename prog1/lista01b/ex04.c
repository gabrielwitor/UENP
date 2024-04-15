/*
Implemente um programa em C que leia um valor representando o gasto realizado por um
cliente do restaurante e imprima o valor total a ser pago, considerando os 10% do garçom.
*/

#include <stdio.h>

int main(){

    float gasto;

    printf("Digite o total gasto no restaurante: ");
    scanf("%f",&gasto);

    printf("O total a ser pago, contando os 10%% de desconto e: R$%.2f",gasto + (gasto*0.1));

}