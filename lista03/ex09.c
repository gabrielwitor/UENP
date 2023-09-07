/*
Faça um programa que leia um número e verifique se ele é primo ou não.
*/

#include <stdio.h>

int main(){
    int n, i, factors;

    do{
        factors = 0;
        
        printf("Digite um numero ([0] para sair): ");
        scanf("%d",&n);

        for (i = 1; i <= n ; i++){
            factors = ((n % i) == 0) ? factors + 1 : factors;}

        if (factors == 2){ printf("%d e um numero primo.\n",n);
        } else printf("%d nao e um numero primo.\n",n);

    }while(n != 0);

    return 0;
}