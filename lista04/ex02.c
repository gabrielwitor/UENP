/*
Faça uma função que receba como parâmetro um número inteiro e verifique se este é primo
ou não.
*/

#include <stdio.h>

void isitprime(int n){
    int factors = 0;

    for (int i = 1 ; i <= n ; i++){
        factors = (n % i == 0) ? factors + 1 : factors; // operador ternário -> Soma mais um em factors se o resto da divisão for 0
    }

    (factors <= 2) ? printf("%d e primo",n): printf("%d nao e primo",n);
}

int main(){
    int num;

    printf("Digite um numero inteiro maior que 0: ");
    scanf("%d",&num);

    isitprime(num);

    return 0;
}