/*
Peça ao usuário para digitar três valores inteiros e imprima a soma deles
*/

#include <stdio.h>

int main(){

    int a, b, c, soma;
    printf("Digite tres numeros: ");

    scanf("%d%d%d",&a,&b,&c);

    soma = a + b + c;

    printf("%d + %d + %d = %d",a,b,c,soma);

    return 0;
}