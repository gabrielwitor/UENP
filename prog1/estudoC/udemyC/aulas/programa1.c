// aula sobre variáveis

#include <stdio.h> // biblioteca standart in out, ou seja, necessária para entrada e saída de dados.

int main(){ // a chave delimita um bloco de código (inicio do bloco)
    int idade; //declarando variável 

    printf("Qual e a sua idade? "); //função para escrever algo na saída padrão (console)

    scanf("%d",&idade); //recebendo dados

    printf("Voce tem %i anos.",idade); // o ponto e vírgula finaliza um comando
    return 0;
    
} // fim do bloco