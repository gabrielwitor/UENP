/*
Faça uma função que receba um número inteiro qualquer, calcule e mostre a tabuada deste
número.
*/

#include <stdio.h>

void multitable(int n){

    printf("Tabuada do %d:",n);

    for (int i = 1 ; i <= 10 ; i++){
        
        printf("\n%d * %d = %d",n,i,n*i);
    }
}

int main(){
    int n;

    printf("Digite um numero inteiro qualquer: ");
    scanf("%d",&n);

    multitable(n);
    return 0;
}