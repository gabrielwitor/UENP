/*
Faça um programa que receba uma quantidade de números inteiros, em seguida calcule e
mostre a sua média. A quantidade de números deve ser fornecida pelo usuário.
*/

#include <stdio.h>

int main(){
    
    float i, qtd, nota, media;

    printf("Quantas notas deseja digitar para calcular a media? ");
    scanf("%f",&qtd);

    for (i = 1 ; i <= qtd ; i++){
        printf("Digite a nota: ");
        scanf("%f",&nota);
        media += nota;
    }

    media = media / qtd;

    printf("\nMedia das notas: %.2f",media);
    
    return 0;
}