/*
Defina uma estrutura aluno contendo os campos nome, sobrenome e nota. O programa
deve ler esses dados e armazenar dinamicamente na memória. Depois, implemente uma
funçao para imprimir o nome e sobrenome do aluno que possui maior nota. O protótipo
da função é seguinte:

void alunoMaiorNota(struct aluno *vetAlunos, int tam) { .. }
*/

#include <stdio.h>
#include <stdlib.h>

struct aluno{
    char nome[255];
    char sobrenome[255];
    float nota;
};

void alunoMaiorNota(struct aluno *alunos, int tam){
    int indiceMaiorNota = 0;

    for(int i = 0; i < tam; i++)
        indiceMaiorNota = (alunos[i].nota > alunos[indiceMaiorNota].nota) ? i : indiceMaiorNota;
    
    printf("\nO aluno com maior nota tirou %.2f e se chama ",alunos[indiceMaiorNota].nota);

    for(int i = 0; alunos[indiceMaiorNota].nome[i] != '\n'; i++)
        printf("%c",alunos[indiceMaiorNota].nome[i]);

    printf(" ");
    
    for(int i = 0; alunos[indiceMaiorNota].sobrenome[i] != '\n'; i++)
        printf("%c",alunos[indiceMaiorNota].sobrenome[i]);
}

int main(){
    struct aluno * alunos;
    int tam;
    
    printf("Digite a quantidade de alunos: ");
    scanf("%d",&tam);

    alunos = (struct aluno *) malloc (tam * sizeof(struct aluno));

    for(int i = 0; i < tam; i++){
        printf("\n------------------------ [Aluno %d] ------------------------\n", i);
        setbuf(stdin,NULL);

        printf("\nDigite o nome do aluno [%d]: ", i);
        fgets(alunos[i].nome, 255, stdin);

        printf("Digite o sobrenome do aluno [%d]: ", i);
        fgets(alunos[i].sobrenome, 255, stdin);

        printf("Digite a nota do aluno [%d]: ", i);
        scanf("%f",&alunos[i].nota);

        printf("\n-----------------------------------------------------------\n");

    }
    alunoMaiorNota(alunos, tam);

    return 0;
}