/*
Implemente um programa que leia as variáveis a, b e c e imprima os valores das quatros
fórmulas seguintes:

a) (a ∗ b) / c
b) a^2 + b + 5c
c) a * b * c + b + ((c/3)*5) - 1
d) ("(a * b * c)^3 / 2

*/


#include <stdio.h>
#include <math.h>

int main(){

    float a, b, c;

    printf("Digite o valor das variaveis a,b e c: ");
    scanf("%f%f%f",&a,&b,&c);

    printf("(a*b) / c = %.1f\n",(a*b)/c);

    printf("a^2 + b + 5c = %.1f\n",pow(a,2)+b+5*c);

    printf("a * b * c + b + ((c/3)*5) - 1 = %.1f\n",a * b * c + b + ((c/3)*5) - 1);

    printf("(a * b * c)^3 / 2 = %.1f", pow(a*b*c,3) / 2);

    return 0;
}