/*
Leia um valor de massa em quilogramas e apresente-o convertido em libras. A fórmula de conversão é:
L = K / 0.45, sendo K a massa em quilogramas e L a massa em libras.
*/


#include <stdio.h>

int main(){

    float kg, l;

    printf("Digite a massa em kg: ");
    scanf("%f",&kg);


    l = kg / 0.45;

    printf("%f quilos equivalem a %f libras",kg,l);

    return 0;
}   

