/*
Faça um programa receba a idade de várias pessoas e armazene em um vetor, em seguida,
contabilize e mostre o total de pessoas com menos de 18 anos e o total com mais de 30
anos. O programa deve ser encerrado quando for digitado o valor 0.
*/

#include <stdio.h>

int main(){
    int n, menor18 = 0, maior30 = 0;
    printf("Digite a quantidade de pessoas: ");
    scanf("%d",&n);

    int idades[n];

    for (int i = 0; i < n; i++){
        printf("Digite a idade: [0] para encerrar o programa ");
        scanf("%d",&idades[i]);
        if (idades[i] == 0)
            return 0;
    }

    for (int i = 0; i < n; i++){
        menor18 = (idades[i] < 18) ? menor18 + 1 : menor18;
        maior30 = (idades[i] > 30) ? maior30 +1 : maior30;
    }

    printf("Quantidade de pessoas menores de 18: %d\nQuantidade de pessoas maiores de 30: %d",menor18,maior30);
    return 0;
}