/*
Aula do dia 03/05/2023
*/

#include <stdio.h>

int main(){
    int idade;

    printf("Qual e a sua idade? ");
    scanf("%d",&idade);

    if (idade > 16 && idade < 18){
        printf("Eleitor facultativo");
    }
    else if (idade >= 18 && idade <= 65){
        printf("Eleitor obrigatorio");
    }
    else{
        printf("Nao eleitor");
    }

    return 0;
}