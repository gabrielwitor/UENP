/*
Nos parques de diversão, alguns brinquedos tem idade e altura mínimas para poder andar
neles. Em dado parque com 3 brinquedos temos a seguinte limitação:

• Barca Viking: 1,5m de altura e 12 anos.
• Elevator of Death: 1,4m de altura e 14 anos.
• Final Killer: 1,7m de altura ou 16 anos.

Façaa um programa que receba a altura e a idade de uma pessoa, identifique quantos
brinquedos ele pode andar.
*/

#include <stdio.h>

int main(){

    float altura;
    int idade, qtd_brinquedos = 0;

    printf("\n=================================================");
    printf("\n| Nome do brinquedo | Requisitos                |");
    printf("\n=================================================");
    printf("\n| Barca Viking      | 1,5m de altura e 12 anos  |");
    printf("\n| Elevator of Death | 1,4m de altura e 14 anos  |");
    printf("\n| Final Killer      | 1,7m de altura ou 16 anos |");
    printf("\n=================================================\n");

    printf("Digite sua altura: ");
    scanf("%f",&altura);

    printf("Digite sua idade: ");
    scanf("%i",&idade);

    if ((altura >= 1.5) && (idade >= 12)){ //Barca Viking
        qtd_brinquedos += 1; 
    }

    if ((altura >= 1.4) && (idade > 14)){ //Elevator of Death
        qtd_brinquedos += 1;
    }

    if ((altura >= 1.7) || (idade >= 16)){ //Final killer
        qtd_brinquedos += 1;
    }

    printf("Voce pode andar em %i brinquedos.",qtd_brinquedos);

    return 0;
}