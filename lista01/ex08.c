/*
Faça um algoritmo que recebe o salário-base de um funcionário, calcule e mostre seu salário
a receber, sabendo-se que ele tem gratificação de R$ 50,00 e paga imposto de 12% sobre o
salário-base.
*/

#include <stdio.h>

int main(){

    float salario;

    printf("Digite o salario-base: R$");
    scanf("%f",&salario);

    printf("Salario a receber: R$%.2f",(salario-(salario*0.12)+50));

    return 0;
}