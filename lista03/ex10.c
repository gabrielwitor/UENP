/*
Faça um programa que leia uma sequência de números inteiros e mostre quantos números
múltiplos de 7 foram digitados no intervalo entre 10 e 50, bem como a média desses números.
O programa deve ser encerrado quando for digitado o valor 0.
*/

#include <stdio.h>

int main(){
    int n, sum = 0, verify = 0;
    float media;

    do{
        printf("Digite um valor ([0] para sair): ");
        scanf(" %i",&n);

        if (n % 7 == 0 && n >= 10 && n <= 50){
            verify++;
            sum += n;
        }

    } while(n != 0);

    media = (float)sum/verify;

    printf("Total de numeros multiplos de 7 no intervalo entre 10 e 50: %d\nMedia desses numeros: %.2f",verify, media);

    return 0;
}