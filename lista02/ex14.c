/*
Faça um programa que receba o trajeto em km percorrido por um veículo, o tipo do veículo
e mostre o consumo estimado de combustvel, sabendo-se que um veículo tipo A faz 15 km
com um litro de gasolina, um veículo tipo B faz 12 km e um veículo tipo C, 10 km por litro.
*/

#include <stdio.h>
#include <ctype.h>

int main(){

    char tipo;
    int quilometragemA = 15, quilometragemB = 12, quilometragemC = 10;
    float trajeto;

    printf("Digite o tipo de veiculo: [A, B ou C] ");
    scanf("%c",&tipo);

    printf("Digite o trajeto percorrido em km: ");
    scanf("%f",&trajeto);

    tipo = toupper(tipo);

    switch (tipo)
    {
    case 'A':
        printf("O veiculo de tipo A gastou %.1f litros de gasolina no trajeto.", trajeto/quilometragemA);
        break;
    
    case 'B':
        printf("O veiculo de tipo B gastou %.1f litros de gasolina no trajeto.", trajeto/quilometragemB);
        break;

    case 'C':
        printf("O veiculo de tipo C gastou %.1f litros de gasolina no trajeto.", trajeto/quilometragemC);
        break;

    default:
        printf("\nOpcao invalida. Encerrando Programa.");
        break;
    }

    return 0;
}