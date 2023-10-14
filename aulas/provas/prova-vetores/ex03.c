/*
Faça um programa que leia o preço de 'm' produtos eletrônicos e armaneze-os em um vetor, 
depois, preencha uma matriz com a quantidade estocada de cada um desses 'm' 
'produtos em 'n' lojas diferentes. 
O programa deve calcular e mostrar:

a) A quantidade de produtos armazenados em cada uma das lojas. 

b) A quantidade de cada um dos produtos armazenados em todas as lojas.

c) O valor do produto que possui maior estoque em uma única loja.

d) O custo de cada loja.
*/

#include <stdio.h>

int main(){
    int n, m;

    printf("Digite a quantidade de produtos que voce deseja cadastrar o preco: ");
    scanf("%d",&m);

    float prices[m];
    for(int i = 0; i < m; i++){
        printf("Digite o valor do produto de indice [%d]: ",i);
        scanf("%f",&prices[i]);
    }

    printf("Quantas lojas deseja cadastrar? Digite: ");
    scanf("%d",&n);

    int Storage[n][m];

    for(int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            printf("Digite a quantidade de produtos [%d] da loja [%d]: ",j,i);
            scanf("%d",&Storage[i][j]);
        }
    }

    //Mostrar quantidade de produtos em cada loja
    for(int i = 0; i < n; i++){
        int sum = 0;
        for (int j = 0; j < m; j++){
            sum += Storage[i][j];
        }
        printf("Quantidade de produtos na loja [%d] = %d\n",i,sum);
    }

    //Mostar a quantidade de um produto em cada uma das lojas
    for(int i = 0; i < n; i++){
        int sum = 0;
        for (int j = 0; j < m; j++){
            sum += Storage[j][i];
        }
        printf("Quantidade de produtos [%d] nas lojas = %d\n",i,sum);
    }

    //Mostrar o valor do produto que possui maior estoque em uma única loja.
    for(int i = 0; i < n; i++){
        int largestAmountOfProducts = 0;
        int largestAmountOfProductsIndex = 0;
        for(int j = 0; j < m; j++){
            if(largestAmountOfProducts < Storage[i][j]){
                largestAmountOfProducts = Storage[i][j];
                largestAmountOfProductsIndex = j;
            }
        }
        printf("O produto que possui mais estoque na loja [%d] custa [R$%.2f]\n",i,prices[largestAmountOfProductsIndex]);
    }

    //Mostar o custo de cada loja
    for(int i = 0; i < n; i++){
        float cost = 0;
        for(int j = 0; j < m; j++){
            cost += (Storage[i][j]*prices[j]);
        }
        printf("Custo da loja [%d] = R$%.2f\n",i,cost);
    }

    return 0;
}