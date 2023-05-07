/*
Uma agência bancária decidiu conceder um crédito especial aos seus clientes de acordo com
o saldo médio no último ano. Faça um programa que receba o saldo médio de um cliente e
calcule o valor do crédito, com base na tabela a seguir.

Saldo médio                                Valor do crédito
R$400,00 < saldo médio                     30% do saldo médio
R$ 300,00 < saldo médio ≤ R$ 400,00        25% do saldo médio
R$ 200,00 < saldo médio ≤ R$ 300,00        20% do saldo médio
saldo médio ≤ R$ 200,00                    10% do saldo médio
*/

#include <stdio.h>

int main(){
    float saldoMedio;

    printf("\nTabela do credito especial concedido:\n");

    printf("\n============================================================");
    printf("\n| Saldo medio                        | Valor do credito    |");
    printf("\n============================================================");
    printf("\n| R$400,00 < saldo medio             | 30%% do saldo medio  |");
    printf("\n|------------------------------------|---------------------|");
    printf("\n| R$300,00 < saldo medio <= R$400,00 | 25%% do saldo medio  |");
    printf("\n|------------------------------------|---------------------|");
    printf("\n| R$200,00 < saldo medio <= R&300,00 | 20%% do saldo medio  |");
    printf("\n|------------------------------------|---------------------|");
    printf("\n| saldo medio <= 200,00              | 10%% do saldo medio  |");
    printf("\n============================================================");

    printf("\n\nDigite o saldo medio do ultimo ano: \nR$ ");
    scanf("%f",&saldoMedio);

    if (saldoMedio>400.00){
        printf("Valor do credito: R$%.2f",saldoMedio*0.3);
    } else if ((400 >= saldoMedio) && (saldoMedio> 300)){
        printf("Valor do credito: R$%.2f",saldoMedio*0.25);
    } else if ((300 >= saldoMedio) && (saldoMedio > 200)){
        printf("Valor do credito: R$%.2f",saldoMedio*0.2);
    } else if (200 >= saldoMedio){
        printf("Valor do credito: R$%.2f",saldoMedio*0.1);
    }
    
    return 0;
}