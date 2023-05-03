/*
Aula do dia 03/05/2023
*/

#include <stdio.h>

int main(){
    float n1,n2,n3,n4,media;

    printf("Digite as notas do aluno: ");
    scanf("%f%f%f%f",&n1,&n2,&n3,&n4);

    media = (n1+n2+n3+n4)/4;

    if (media >= 7){
        printf("Aprovado! Media do aluno: %.1f",media);
    }
    else{
        printf("Reprovado! Media do aluno: %.1f",media);
    }

    return 0;
}