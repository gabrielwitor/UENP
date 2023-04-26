/*
Implemente um programa em C que leia o número de um funcionário, seu número de horas
trabalhadas, o valor que recebe por hora e calcula o salário desse funcionário. A seguir,
mostre o número e o salário do funcionário.
*/

#include <stdio.h>

int main(){
    int numero, horasTrabalhadas;
    float valorPorHora;

    printf("Digite o numero do funcionario: ");
    scanf("%d",&numero);

    printf("Digite o total de horas trabalhadas: ");
    scanf("%d",&horasTrabalhadas);

    printf("Digite o valor que o funcionario recebe por hora: ");
    scanf("%f",&valorPorHora);

    printf("O funcionario de numero %d que trabalhou %d horas e ganha R$%.2f por hora trabalhada recebe: R$%.2f", numero, horasTrabalhadas, valorPorHora, horasTrabalhadas * valorPorHora);

    return 0;
}