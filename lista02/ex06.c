/*
Uma pequena mercearia resolveu dar descontos para agradar seus clientes. A mercearia
contém apenas 4 itens, cujos preços são dados pela Tabela 1.
A regra de desconto é bem simples: se a quantidade de produtos comprados for igual ou
maior que R$ 15,00, então o desconto é concedido. O desconto também é concedido caso o
valor total da compra seja maior ou igual R$ 40,00. O valor do desconto é de 15%.
Faça um programa que leia o código do produto, a quantidade comprada e exiba o valor
que o cliente deve pagar, já considerando o desconto quando aplicável. Considere que o
cliente só pode comprar um único tipo produto cada vez que usar o seu software.

Código Preço unitário
1      R$ 5,30
2      R$ 6,00
3      R$ 3,20
4      R$ 2,50
*/

#include <stdio.h>

int main(){
    
    int codigo, quantidade; 
    float valor;

    printf("=============================\n");
    printf("| Codigo   | Preco unitario |\n");
    printf("=============================\n");
    printf("| [1]      | R$ 5,30        |\n");
    printf("| [2]      | R$ 6,00        |\n");
    printf("| [3]      | R$ 3,20        |\n");
    printf("| [4]      | R$ 2,50        |\n");
    printf("=============================\n");

    printf("Digite o codigo do produto que deseja comprar: ");
    scanf("%i",&codigo);

    printf("Digite a quantidade que deseja comprar: ");
    scanf("%i",&quantidade);

    if (quantidade > 0){

        switch (codigo){

        case 1:
            valor = 5.30 * quantidade;
            break;

        case 2:
            valor = 6 * quantidade;
            break;

        case 3:
            valor = 3.20 * quantidade;
            break;
            
        case 4:
            valor = 2.50 * quantidade;
            break;

        default:
            printf("Codigo invalido. Encerrando programa.");
            break;
        }

    }
    else{
        printf("Quantidade invalida. Encerrando programa.");
    }

    if (valor >= 15){
        printf("Desconto de 15%% aplicado!\nVoce devera pagar: R$%.2f",valor*0.85);
    }
    else{
        printf("Desconto nao aplicavel.\nVoce devera pagar: R$%.2f",valor);
    }

    return 0;
}