/*
Faça um programa para montar um banco de dados relacionado a um jogo, o qual deve
conter informações de inúmeros monstros e personagens. Inicialmente, o programa deve
receber a quantidade de personagens/monstros a ser cadastrada. Os dados a serem colocados
no banco são:

- Uma sequencia de caracteres, que poderá ter no máximo 20 caracteres, representando
um nome.
- 5 inteiros, representando ID, Level, Vida, Ataque e Defesa.

Ao final, o programa deve exibir o banco de dados cadastrado.
*/

#include <stdio.h>

#define MAXSIZE 20

struct entidade{
    char nome[MAXCHAR];
    int id, level, vida, ataque, defesa;
};

typedef struct entidade entidade;

int main(){
    int quantidade;

    printf("\nQuantos pernsonagens/monstros você deseja criar: ");
    scanf("%d",&quantidade);
    setbuf(stdin,NULL);

    entidade entidades[quantidade];

    for(int i = 0; i < quantidade; i++){
        printf("\n===================== ENTIDADE [%d] =====================",i);
        printf("\nNome da entidade: ");
        fgets(entidades[i].nome,MAXCHAR,stdin);

        printf("\nid da entidade: ");
        scanf("%d",&entidades[i].id);

        printf("\nLevel da entidade: ");
        scanf("%d",&entidades[i].level);

        printf("\nVida da entidade: ");
        scanf("%d",&entidades[i].vida);

        printf("\nAtaque da entidade: ");
        scanf("%d",&entidades[i].ataque);

        printf("\nDefesa da entidade: ");
        scanf("%d",&entidades[i].defesa);
        setbuf(stdin,NULL);

        printf("\n========================================================\n");
    }

    for(int i = 0; i < quantidade; i++){
        printf("\nEntidade [%d]",i);
        printf("\nNome: %s",entidades[i].nome);
        printf("id: %d",entidades[i].id);
        printf("\nLevel: LVL %d",entidades[i].level);
        printf("\nVida: %d HP",entidades[i].vida);
        printf("\nAtaque: %d DMG",entidades[i].ataque);
        printf("\nDefesa: %d AP\n",entidades[i].defesa);

    }

    return 0;
}