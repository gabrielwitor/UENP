/*
Aula do dia 26/04/202
*/

#include <stdio.h> // incluir bibliotecas -> stdio é uma biblioteca necessária para entrada e saida do usuário.

int main(){ // função principal -> tudo que for escrito neste bloco será executado.

    // int idade,ano = 2023, anoNascimento; // declarando variável inteira. 

    // printf("Qual sua idade? "); // comando de impressão -> imprime mensagem na tela

    // scanf("%i",&idade); // comando para leitura

    // anoNascimento = ano - idade; // operação matemática dentro do código

    // printf("Voce nasceu no ano %i\n ",anoNascimento);

    // int x = 5, y;

    // y = 2 + ++x;

    // printf("x = %i, y= %i",x,y);

    float nota1, nota2, nota3, nota4, media;

    printf("Digite as notas: ");

    scanf("%f%f%f%f",&nota1,&nota2,&nota3,&nota4);

    media = (nota1+nota2+nota3+nota4)/4;

    printf("A media do aluno e: %.2f",media);

    return 0;
}