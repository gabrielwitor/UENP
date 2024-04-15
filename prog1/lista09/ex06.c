/*
Uma pesquisa feita com alunos do ensino fundamental coletou alguns dados para análise,
como nome, idade, altura e peso. Faca um programa que leia os dados de 20 crianças e
armazene em um vetor de estrutura. Depois, implemente uma funcao que mostre o nome
do aluno mais novo e o nome do aluno com o maior peso.
*/

#include <stdio.h>

#define QTD 3 //Quantidade de crianças

struct pesquisa
{
    char nome[50];
    int idade;
    float altura;
    float peso;
};

typedef struct pesquisa pesquisa;

void exibir(pesquisa *criancas){
    int menorIdade = criancas[0].idade;
    float maiorPeso = criancas[0].peso;

    for(int i = 0; i < QTD; i++){
        menorIdade = (menorIdade > criancas[i].idade) ? criancas[i].idade : menorIdade;
        maiorPeso = (maiorPeso < criancas[i].peso) ? criancas[i].peso : maiorPeso;
    }
    printf("\nAluno(s) mais novo(s):\n");
    for(int i = 0; i < QTD; i++)
        if(criancas[i].idade == menorIdade)
            printf("Nome: %s",criancas[i].nome);
    
    printf("\nAluno(s) com maior peso:\n");
    for(int i = 0; i < QTD; i++)
        if(criancas[i].peso == maiorPeso)
            printf("Nome: %s",criancas[i].nome);
}

int main(){

    struct pesquisa criancas[QTD];

    for(int i = 0; i < QTD; i++){
        printf("\n-+=-+=-+=-+=-+=-+= [CRIANÇA %d] =+-=+-=+-=+-=+-=+-",i);

        setbuf(stdin,NULL);
        printf("\nDigite o nome da criança: ");
        fgets(criancas[i].nome,50,stdin);

        printf("\nDigite a idade da criança: ");
        scanf("%d",&criancas[i].idade);

        printf("\nDigite a altura da criança: ");
        scanf("%f",&criancas[i].altura);

        printf("\nDigite o peso da criança: ");
        scanf("%f",&criancas[i].peso);

        printf("\n-+=-+=-+=-+=-+=-+=-------------=+-=+-=+-=+-=+-=+-\n");
    }

    exibir(criancas);

    return 0;
}