/*
Na semana do dia do trabalhador um resort resolveu dar a seus clientes um desconto de
30% na diária. O resort, que conta com 45 acomodações, almeja dobrar a sua taxa de
ocupação que hoje é de 35%. Faça um programa que receba o valor normal da diária,
calcule e mostre, 
1) o valor da diária com desconto
2) o total arrecadado com o dobro de ocupação e diária com desconto
3) o total arrecadado com 35% de ocupação e diária normal.
*/


#include <stdio.h>

int main(){

    float diaria, ocupacao;

    ocupacao = 45 * 0.35;

    printf("Qual e o valor da diaria? R$");
    scanf("%f",&diaria);

    printf("\nValor da diaria com desconto de 30 por cento: R$%.2f",diaria-(diaria*0.30));
    printf("\nValor arrecadado com o dobro de ocupacao e diaria com desconto: R$%.2f",(diaria-(diaria*0.30))*(ocupacao*2));
    printf("\nValor arrecadado com 35 por cento de ocupacao e diaria normal: R$%.2f",diaria*ocupacao);

    return 0;
}