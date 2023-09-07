/*
Aula do dia 05/07/2023

Declaração de funções em C

Faça uma função que receba três números inteiros e retorna o
maior deles. Reutilize a função abaixo que retorna o maior entre
dois números.
*/

#include <stdio.h>

int maior2 (int a, int b){
    if (a > b){
        return a;
    }else{
        return b;
    }
}

int main(){
    int a,b,c;
    printf("Digite tres numeros: ");
    scanf("%d%d%d",&a,&b,&c);

    printf("O maior desses valores e: %d", maior2(maior2(a,b),c));
    return 0;
}