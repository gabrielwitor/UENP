/*
Faça um programa para calcular as raízes da equação de segundo grau. O programa recebe
como entrada os números a, b, c, que correspondem aos coeficientes da equação de segundo
grau (ax2 + bx + c = 0). Em seguida, o programa deve mostrar as raízes da equação.
Caso as raízes não existam, uma mensagem deve ser exibida (por exemplo, “Não existem
raízes reais”). Caso a equação não seja de segundo grau, uma mensagem também deve ser
exibida (por exemplo, “Não é uma equação de segundo grau”).
*/

#include <stdio.h>
#include <math.h>

int main(){

    float a, b, c;

    printf("Digite os valores de a, b e c na equacao ax^2 + bx + c = 0\n");
    scanf("%f%f%f",&a,&b,&c);

    printf("Equacao: (%.1f)x^2 + (%.1f)x + (%.1f) = 0\n",a ,b, c);

    if (a != 0){ // Vamos primeiramente verificar se é uma equação de segundo grau.

        if ((pow(b,2) + (-4*a*c)) >= 0){ // Agora, vamos verificar se existem raizes reais.

            printf("x1 = %.1f\n",(-b + sqrt(pow(b,2) + (-4*a*c))) / (2*a));
            printf("x2 = %.1f\n",(-b - sqrt(pow(b,2) + (-4*a*c))) / (2*a));
        } 
        else{
            printf("Nao existem raizes reais.");
        }  

    } 
    else {
        printf("Nao e uma equacao de segundo grau!");
    }

    return 0;
}