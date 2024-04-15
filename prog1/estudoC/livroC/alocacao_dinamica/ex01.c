/*
Escreva um programa que mostre o tamanho em byte que cada tipo de
dados ocupa na memória: char, int, float, double.
*/

#include <stdio.h>

int main(){
    printf("Tamanho em byte do char: %ld\n",sizeof(char));
    printf("Tamanho em byte do int: %ld\n",sizeof(int));
    printf("Tamanho em byte do float: %ld\n",sizeof(float));
    printf("Tamanho em byte do double: %ld\n",sizeof(double));

    return 0;
}