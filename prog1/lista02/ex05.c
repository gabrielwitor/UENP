/*
Faça um programa que receba como entrada 3 números reais maiores que zero correspondendo
ao comprimento dos lados do triângulo, em seguida, classifique-o em:
1. equilátero (os trêes lados de comprimentos iguais)
2. isósceles (dois lados de comprimentos iguais) ou
3. escaleno (os três lados de comprimentos diferentes)
*/

#include <stdio.h>

int main(){
    
    float a, b, c;
    int ladosIguais = 0;

    printf("Digite o comprimento dos 3 lados do triangulo: ");
    scanf("%f%f%f",&a, &b, &c);

    ladosIguais = (a == b) ? ladosIguais + 1: ladosIguais;
    ladosIguais = (b == c) ? ladosIguais + 1: ladosIguais;
    ladosIguais = (c == a) ? ladosIguais + 1: ladosIguais;

    if (ladosIguais == 3){
        printf("O triangulo e equilatero (e isosceles), pois possui %i lados iguais.",ladosIguais);
    }
    else if (ladosIguais == 2){
        printf("O triangulo e isosceles, pois possui %i lados iguais.",ladosIguais);
    }
    else{
        printf("O triangulo e escaleno, pois possui %i lados iguais.",ladosIguais);
    }

    return 0;
}