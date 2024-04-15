/*
Faça um programa que determine e mostre os 50 primeiros números múltiplos de 3 considerando
números maiores que 0.
*/

#include <stdio.h>

int main(){
    int count = 0, numero = 1;

    while (count < 50){
        if ((numero % 3) == 0){
            printf("%d; ",numero);
            count++;
        }
        numero++;
    }

    return 0;
}