/*
Uma máquina automática de café só funciona com notas de R$ 5 e nunca dá o troco. O
café custa R$ 7. Assim, se o cliente pedir apenas um café, ele vai perder R$ 3, pois terá
que dar R$ 10, e a máquina não devolverá o troco. É possível comprar mais de um café
em uma só compra. Logo, se o cliente colocou R$ 15, significa que ele vai obter dois cafés e
perderá R$ 1. Faça um programa que leia o valor que o cliente colocou na máquina (sempre
múltiplo de 5) e imprima quanto o cliente ir ́a perder no troco.
*/

#include <stdio.h>

int main(){

    int precoCafe = 7, valorRecebido;

    printf("Valor do cafe: R$7,00\n");
    printf("A maquina aceita apenas notas de 5 reais.\n");
    
    printf("Insira o dinheiro: ");
    scanf("%d",&valorRecebido);

    printf("Opa! A maquina nao devolve troco! :(\n");
    printf("Valor que seria devolvido: %d",valorRecebido%precoCafe);

    return 0;
}