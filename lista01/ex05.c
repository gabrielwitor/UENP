/*
Faça um programa que receba as coordenadas de dois pontos (A e B) no plano cartesiano,
calcule e mostre distância entre esses dois pontos.
*/

#include <stdio.h>
#include <math.h>


int main(){

    float xa, ya, xb, yb, distanciaAB;

    printf("Digite as coordenadas dos pontos A e B no plano cartesiano:\n");
    
    printf("Coordenada x do ponto A: ");
    scanf("%f",&xa);
    printf("Coordenada y do ponto A: ");
    scanf("%f",&ya);

    printf("Coordenada x do ponto B: ");
    scanf("%f",&xb);
    printf("Coordenada y do ponto B: ");
    scanf("%f",&yb);

    distanciaAB = sqrt(pow((xb-xa),2)+pow((yb-ya),2));

    printf("A distancia entra o ponto A e o ponto B no plano cartesiano equivale a: %.2f",distanciaAB);

    return 0;
}