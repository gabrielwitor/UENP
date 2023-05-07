/*
Faça um programa que receba como entrada 3 números inteiros e e exiba esses números em
ordem decrescente. Desafio: tente utilizar apenas 4 comandos if.
*/

#include <stdio.h>

int main(){
    int a, b, c, temp;

    printf("Digite 3 numeros inteiros aleatorios: ");
    scanf("%i%i%i",&a,&b,&c);

    if (c > a){
        temp = a;
        a = c;
        c = temp;
    }

    if (b > a){
        temp = a;
        a = b;
        b = temp;
    }

    if (c > b){
        temp = b;
        b = c;
        c = temp;
    }

    printf("Ordem decrescente: %i %i %i",a ,b ,c);
}