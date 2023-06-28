/*
Faça um programa receba a idade de várias pessoas, contabilize e mostre o total de pessoas
com menos de 18 anos e o total com mais de 30 anos. O programa deve ser encerrado
quando for digitado o valor 0.
*/

#include <stdio.h>

int main(){
    int idade, menos_18 = 0, mais_30 = 0;

    while (idade != 0){
        printf("Qual a idade? [0] para sair ");
        scanf("%d",&idade);
        menos_18 = (0 < idade && idade < 18) ? menos_18 + 1 : menos_18; // correção: menos_18 estava somando + 1 pois 0 é menos que 18. 
        mais_30 = (idade > 30) ? mais_30 + 1 : mais_30;
    }

    printf("\nMenores de 18 anos: %d\nMaiores de 30 anos: %d",menos_18,mais_30);

    return 0;
}