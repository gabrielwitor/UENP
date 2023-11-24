/*
Uma empresa precisa de um banco de dados para armazenar os dados dos usuarios de sua
rede social. Inicialmente o programa deve receber a quantidade de usuários que deseja
cadastrar. Em seguida, as seguintes informações devem ser guardadas para cada usuário:

- Idade;
- Nome;
- Sexo (m - masculino, f - feminino);
- Estado civil (s - solteiro, c - casado, n - namorando, d - divorciado);
- Quantidade de amigos;
- Quantidade de fotos que estão no perfil.

Ao final, o programa deve exibir as informações de todos os usuários, na sequência em que
eles foram adicionados.
*/

#include <stdio.h>

#define MAXCHAR 255

struct cadastro{
    int idade;
    char nome[MAXCHAR];
    char sexo;
    char estadoCivil;
    int qtdAmigos;
    int qtdFotos;

};

typedef struct cadastro cadastro;

int main(){

    int qtd;
    printf("Quantas pessoas deseja cadastrar? ");
    scanf("%d",&qtd);

    cadastro cadastros[qtd];

    for(int i = 0; i < qtd; i++){
        printf("\n=============== USUARIO [%d] ===============",i);

        setbuf(stdin,NULL);
        printf("\nDigite o nome do usuario: ");
        fgets(cadastros[i].nome,MAXCHAR,stdin);

        printf("\nDigite a idade do usuario: ");
        scanf("%d",&cadastros[i].idade);

        setbuf(stdin,NULL);
        printf("\nDigite o sexo do usuario: [m - masculino | f - feminino] ");
        scanf("%c",&cadastros[i].sexo);
        
        getchar();
        printf("\nDigite o estado civil do usuario: [s - solteiro | c - casado | n - namorando | d - divorciado] ");
        scanf("%c",&cadastros[i].estadoCivil);

        printf("\nDigite a quantidade de amigos do usuario: ");
        scanf("%d",&cadastros[i].qtdAmigos);

        printf("\nDigite a quantidade de fotos no perfil: ");
        scanf("%d",&cadastros[i].qtdFotos);
        printf("===========================================\n\n");
    }

    for(int i = 0; i < qtd; i++){
        printf("Nome do usuario: %s",cadastros[i].nome);
        printf("Idade do usuario: %d\n",cadastros[i].idade);
        printf("Sexo do usuario: ");
        switch (cadastros[i].sexo){
        case 'm':
            printf("masculino\n");
            break;

        case 'f':
            printf("feminino\n");
        
        default:
            printf("inválido\n");
            break;
        }
        printf("Estado civil do usuario: ");
        switch (cadastros[i].estadoCivil){
            case 's':
                printf("solteiro\n");
                break;
            case 'c':
                printf("casado\n");
                break;
            case 'n':
                printf("namorando\n");
                break;
            case 'd':
                printf("divorciado\n");
                break;
            
            default:
                printf("inválido\n");
                break;
        }

        printf("Quantidade de amigos do usuario: %d\n",cadastros[i].qtdAmigos);
        printf("Quantidades de fotos no perfil do usuário: %d\n\n",cadastros[i].qtdFotos);
    }


    return 0;
}