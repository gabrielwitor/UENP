/*
Implemente uma função que receba como parâmetro 2 notas e uma opção correspondendo
ao cálculo da média. Caso a opção seja a letra “a”, deve ser calculada a média aritmética;
caso a opção seja a letra “p”, deve ser calculada a média ponderada (pesos 3 e 2); caso a
opção seja a letra “h”, deve ser calculada a média harmônica. Retorne a média devidamente
calculada para o programa principal.
*/

#include <stdio.h>

float media(float n1, float n2, char option) {
    switch (option) {
        case 'a':
            return (n1 + n2) / 2; // retorna a media aritmetica
            break;

        case 'p':
            return (n1 * 3 + n2 * 2) / 5; // retorna a media ponderada
            break;

        case 'h':
            return 2 / ((1 / n1) + (1 / n2)); // retorna a media harmonica

        default:
            printf("\nOperador invalido.\n");
            return 0;
    }
}

int main() {
    float n1,n2;
    char option;

    printf("Opcoes:\n[a] - Media aritmetica\n[p] - Media ponderada\n[h] - Media harmonica\n\nDigite a nota 1, a nota 2 e a opcao: ");
    scanf("%f%f %c",&n1,&n2,&option);
    printf("%.2f",media(n1,n2,option));
    return 0;
}