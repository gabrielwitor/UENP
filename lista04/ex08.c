/*
Faça uma função que receba um número inteiro qualquer, calcule e mostre todos os seus
divisores, bem como a quantidade de divisores existentes.
*/

#include <stdio.h>

void factors(int n){
    int facquantity = 0; //quantidade de divisores

    printf("Divisores: ");

    for (int i = 1 ; i <= n ; i++){
        if (n % i == 0){
            facquantity = (n % 1 == 0) ? facquantity + 1: facquantity;
            printf("%d; ",i);
        }
        
    }

    printf("\nQuantidade de divisores: %d",facquantity);

}

int main(){
    int n;

    printf("Digite um numero inteiro: ");
    scanf("%d",&n);

    factors(n);

    return 0;
}