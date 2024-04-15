/*
Crie uma estrutura chamada Cadastro. Essa estrutura deve conter o nome,
a idade e o endereço de uma pessoa. Agora, escreva uma função que receba
um inteiro positivo N e retorne o ponteiro para um vetor de tamanho N,
alocado dinamicamente, dessa estrutura. Solicite também que o usuário
digite os dados desse vetor dentro da função.
*/

#include <stdio.h>
#include <stdlib.h>

struct endereco{
    char rua[255];
    char bairro[255];
    int numero;
};

struct cadastro{
    char nome[255];
    int idade;
    struct endereco endereco;
};

struct cadastro * retornaPonteiro(int n){
    struct cadastro * cadastros;

    cadastros = (struct cadastro *) malloc (n * sizeof(struct cadastro));
    return cadastros;
}

int main(){
    struct cadastro * cadastros = retornaPonteiro(1);

    printf("Digite o nome: ");
    fgets(cadastros[1].nome,255,stdin);

    printf("%s",cadastros[1].nome);




    return 0;
}