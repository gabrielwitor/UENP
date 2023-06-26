/*
Faça um programa que receba dois números inteiros representando o intervalo (inicio) e
(fim) de uma sequência, e depois imprima todos os números ímpares dentro deste intervalo.
*/

#include <stdio.h>

int main(){

    int inicio, fim;

    printf("Digite os valores de inicio e fim do intervalo:\n");
    printf("Valor de inicio: ");
    scanf("%d",&inicio);
    printf("Valor do fim: ");
    scanf("%d",&fim);

    printf("\nNumeros impares do intervalo de %d a %d:\n",inicio,fim);

    for (; inicio <= fim ; inicio++){
        if (inicio%2 != 0) //imprime somente valores impares
        {
            printf("%d ",inicio);
        }
    }
    return 0;
}