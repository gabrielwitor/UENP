/*
Faça um programa que leia o nome e o valor de determinada mercadoria de uma loja.
Sabendo que o desconto para pagamento à vista é de 10% sobre o valor total, calcule o
valor a ser pago à vista. Escreva o nome da mercadoria, o valor total, o valor do desconto
e o valor a ser pago à vista.
*/

#include <stdio.h>

#define MAXSIZE 100

int main(){
    char productName[MAXSIZE];

    float productPrice, productDiscount, productDiscountedPrice;

    printf("Digite o nome do produto: ");
    fgets(productName,MAXSIZE,stdin);

    printf("Digite o preco do produto: R$");
    scanf("%f",&productPrice);

    productDiscount = 0.1 * productPrice;
    
    productDiscountedPrice = productPrice - productDiscount;

    printf("Nome do produto: %sValor total: R$%.2f\nValor do desconto: R$%.2f\nValor pago a vista: R$%.2f", productName,productPrice,productDiscount,productDiscountedPrice);

    return 0;
}