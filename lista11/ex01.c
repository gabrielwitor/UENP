/*
Implemente uma funcao recursiva que receba um numero inteiro positivo par n e imprima
todos os numeros pares de 0 ate n em ordem decrescente.
*/

#include <stdio.h>

int imprimirDecr (int n){
    if (n % 2 == 0)
        printf("%d ",n);

    if (n == 0)
        return n;

    return imprimirDecr(n-1);
}

int imprimirCres(int estado, int n){
    if (estado % 2 == 0)
        printf("%d ",estado);

    if (estado == n)
        return n;

    return imprimirCres(estado+1, n);
}

int main(){
    int numero;

    printf("Digite um valor inteiro positivo par: ");
    scanf("%d",&numero);

    printf("\nTodos os números pares de %d até 0:\n", numero);
    imprimirDecr(numero);

    printf("\nTodos os números pares de 0 até %d:\n", numero);
    imprimirCres(0,numero);
    
    return 0;
}