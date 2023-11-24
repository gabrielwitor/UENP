/*
Faça um programa para cadastrar um conjunto de até 100 lojas contendo os seguintes
campos: nome da loja, endereço, telefone e preço de um determinado produto eletrônico.
Em seguida, o programa deve exibir a média dos precos dos produtos cadastrados e uma
relação contendo o nome, endereço e telefone das lojas cujo preço estão abaixo da média
calculada.
*/

#include <stdio.h>

#define MAXLOJAS 100
#define MAXCHAR 255

struct endereco
{
    char nomerua[MAXCHAR];
    char nomebairro[MAXCHAR];
    int numero;
};

struct loja
{
    char nome[MAXCHAR];
    struct endereco endereco;
    char telefone[MAXCHAR];
    float preco;
};

float calcmedia(struct loja *loja){
    float sum = 0;
    for(int i = 0; i < MAXLOJAS; i++)
        sum += loja[i].preco;

    return sum / MAXLOJAS;
}

int main(){

    struct loja loja[MAXLOJAS];

    for(int i = 0; i < MAXLOJAS; i++){
        
        printf("============== LOJA [%d] ==============\n",i);

        setbuf(stdin,NULL);
        printf("Digite o nome da loja: ");
        fgets(loja[i].nome,MAXCHAR,stdin);

        printf("Digite o nome da rua: ");
        fgets(loja[i].endereco.nomerua,MAXCHAR,stdin);

        printf("Digite o nome do bairro: ");
        fgets(loja[i].endereco.nomebairro,MAXCHAR,stdin);

        printf("Digite o numero: ");
        scanf("%d",&loja[i].endereco.numero);

        setbuf(stdin,NULL);
        printf("Digite o numero de telefone: ");
        fgets(loja[i].telefone,MAXCHAR,stdin);
        
        printf("Digite o valor do produto: R$");
        scanf("%f",&loja[i].preco);

        printf("======================================\n\n");

    }

    printf("Media do preço nas lojas: R$%.2f\n\n",calcmedia(loja));

    printf("Lojas com preços abaixo da media: \n\n");

    for(int i = 0; i < MAXLOJAS; i++){
        if(loja[i].preco < calcmedia(loja)){
            printf("Nome da loja: %s",loja[i].nome);
            printf("Rua: %s",loja[i].endereco.nomerua);
            printf("Bairro: %s",loja[i].endereco.nomebairro);
            printf("Numero: %d\n",loja[i].endereco.numero);
            printf("Telefone: %s",loja[i].telefone);
            printf("Preço: R$%.2f\n\n",loja[i].preco);
        }
    }

    return 0;
}