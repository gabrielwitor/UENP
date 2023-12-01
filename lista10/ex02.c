/*
Implemente um programa que leia os codigos de matricula dos alunos de duas disciplinas
(progI e progII) e mostre os códigos de matrículas dos alunos que estao cursando ambas as
disciplinas. O número de alunos de ambas as turmas é informado pelo usuário. O espaço
de memória necessário para armazenar os códigos das matrículas nas disciplinas deve ser
criado dinamicamente, de acordo com esse número.
*/

#include <stdio.h>
#include <stdlib.h>

void ler(int * vet, int qtd){
    for(int i = 0; i < qtd; i++){
        printf("Digite a matrícula do aluno [%d]: ",i);
        scanf("%d",&vet[i]);
    }
}

int main(){
    int qtd_progI, qtd_progII;
    
    printf("Digite a quantidade de alunos na turma de prog I: ");
    scanf("%d",&qtd_progI);

    printf("Digite a quantidade de alunos na turma de prog II: ");
    scanf("%d",&qtd_progII);

    int *progI = (int *) malloc(qtd_progI * sizeof(int)), *progII = (int *) malloc(qtd_progII * sizeof(int));

    printf("\nProg I:\n");
    ler(progI, qtd_progI);

    printf("\nProg II:\n");
    ler(progII, qtd_progII);


    printf("\nMatrículas dos alunos que estão cursando as duas disciplinas:\n");
    for(int i = 0; i < qtd_progI; i++){
        for(int j = 0; j < qtd_progII; j++){
            if(progI[i] == progII[j]){
                printf("%d ",progI[i]);
                break;
            }
        }
    }

    free(progI);
    free(progII);

    return 0;
}