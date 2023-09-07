/*
Aula do dia 03/05/2023
*/

#include <stdio.h>

int main(){
    float salario;

    printf("Digite o salario: R$");
    scanf("%f",&salario);

    if (salario <= 1000){
        salario *= 1.15;
    }
    else if (salario > 1000 && salario <= 2000){
        salario *= 1.10;
    }
    else{
        salario *= 1.05;
    }

    printf("Salario apos o aumento: R$%.2f \n",salario);

    system ("pause");
    return 0;

}