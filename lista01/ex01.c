/* 
Faça um programa que leia o raio de um círculo, calcule e mostre o seu perímetro (p) e sua área (a).
Lembrando que: 
p = 2 ∗ π ∗ raio
a = π ∗ raio2
*/
#include <stdio.h>
#include <math.h>

int main(){

    float raio, perimetro, area;
    float pi = 3.1415;

    printf("Digite o raio do circulo: ");
    scanf("%f",&raio);

    perimetro = 2 * pi * raio;
    area = pi * (pow(raio,2));

    printf("A circunferencia de raio %.2f tem:",raio);
    printf("\nPerimetro: %.2f",perimetro);
    printf("\nArea: %.2f",area);
    return 0;
}