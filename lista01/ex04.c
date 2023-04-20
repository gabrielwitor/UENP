/*
Faça um programa que receba uma determinada hora expressa
no formato de horas, minutos e segundos e, em seguida, transforme no calor correspondente
em segundos.
*/

#include <stdio.h>

int main(){

    int hora, minutos, segundos;

    printf("Quantas horas: ");
    scanf("%d",&hora);

    printf("Quantos minutos: ");
    scanf("%d",&minutos);

    printf("Quantos segundos: ");
    scanf("%d",&segundos);

    printf("Essa hora em segundos equivale a %d segundos.",(hora*60*60)+(minutos*60)+segundos);

    return 0;
}