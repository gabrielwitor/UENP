/*
Faça um programa para calcular as raízes da equação de 2o grau. O programa recebe como
entrada os números a, b, c, que correspondem aos coeficientes da equação de segundo grau
(ax2 + bx + c = 0). Em seguida, o programa deve mostrar as raízes da equação. Caso
as raízes não existam, uma mensagem deve ser exibida (por exemplo, “Não existem raízes
reais”). Caso a equação não seja de segundo grau, uma mensagem também deve ser exibida
(por exemplo, “Não é uma equação de segundo grau”).
Para isso, implemente funções para calcular e retornar o valor de delta e para calcular e
retornar os valores das raizes x1 e x2 da equação.
*/

#include <stdio.h>
#include <math.h>

float delta(float a, float b, float c){
    return pow(b,2)+(-4*a*c);
}

float x1(float a, float b, float c){
    return ((-b+sqrt(delta(a,b,c)))/(2*a));
}

float x2(float a, float b, float c){
    return ((-b-sqrt(delta(a,b,c)))/(2*a));
}

int main(){
    float a, b, c;
    printf("Digite os valores de a, b e c de uma funcao de segundo grau formato: (ax^2 + bx + c = 0) ");
    scanf("%f%f%f",&a,&b,&c);

    if (a != 0){
        (delta(a,b,c) < 0) ? printf("Nao ha raizes reais") : printf("Raiz x1 = %.1f\nRaiz x2 = %.1f",x1(a,b,c),x2(a,b,c)); 
    }else{
        printf("a = 0, portanto nao e uma funcao de segundo grau.");
    }

    return 0;
}