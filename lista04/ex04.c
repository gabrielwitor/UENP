/*
Faça um programa que calcule a potencia de um número qualquer fornecido pelo usuário.
Para isso, implemente uma função que receba como parâmetro dois números inteiros x e n,
calcule e retorne para o programa principal o resultado de x^n. NAO USE nenhuma função pronta
(ou seja, pow()).
*/

#include <stdio.h>

int poweredto(int x, int n){
    int result = 1;
    for (int i = 1 ; i <= n ; i++){
        result *= x;
    }
    return result;
}

int main(){
    int x, n;
    printf("Digite um numero inteiro e o expoente: (x^n) ");
    scanf("%d%d",&x,&n);
    printf("%d elevado a %d e igual a %d",x,n,poweredto(x,n));
    return 0;
}