/*
Crie uma estrutura representando um aluno de uma disciplina. Essa
estrutura deve conter o número de matrícula do aluno, seu nome e as notas
de três provas. Escreva um programa que mostre o tamanho em byte dessa
estrutura.
*/

#include <stdio.h>

struct aluno{
    int matricula;
    char nome[255];
    int nota_p1;
    int nota_p2;
    int nota_p3;
};

int main(){
    struct aluno aluno;

    printf("%ld",sizeof(aluno));

    return 0;
}