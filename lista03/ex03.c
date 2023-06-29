/*
Faça um programa que receba como entrada um número inteiro n e exiba o resultado da
seguinte soma:

S = 1 + 1/2 + 1/3 + 1/4 + 1/n
*/

#include <stdio.h>

int main(){
    int i, n; 
    float soma = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d",&n);

    for (i = 1; i <= n; i++){
        soma += (1/(float)i);
    }
    
    printf("\nValor da soma: %.3f",soma);

    return 0;
}
