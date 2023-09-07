/*
Faça um programa que leia 4 notas de um aluno (pesos 1.5, 2, 3, 3.5), 
calcule e mostre a média ponderada.
*/
#include <stdio.h>

int main(){

    float nota1, nota2, nota3, nota4, mediaPonderada;

    printf("Digite as 4 notas do estudante:\n");
    scanf("%f",&nota1);
    scanf("%f",&nota2);
    scanf("%f",&nota3);
    scanf("%f",&nota4);

    mediaPonderada = (nota1*1.5 + nota2*2 + nota3*3 + nota4*3.5) / (1.5+2+3+3.5);

    printf("Media ponderada: %.2f",mediaPonderada);

    return 0;
}