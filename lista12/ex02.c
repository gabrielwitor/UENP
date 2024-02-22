/*
Suponha que agora foi definida uma estrutura para representar os dados dos livros, conforme
exemplo abaixo. Com base nesta estrutura, implemente um programa para (a) gravar os
dados dos livros em um arquivo. Em seguida, implemente outro programa para (b) ler os
dados do arquivo e mostrar os dados lidos na tela.
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

struct livro{
    char nome[50];
    int registro;
    float preco;
};

void formatarNome(char * nome){
    nome[strcspn(nome, "\n")] = 0;
    for(int i = 0; i < strlen(nome); i++){
        
        nome[i] = tolower(nome[i]);
        if(nome[i] == ' ')
            nome[i] = '_';
    }
}

void criarRegistro(){
    FILE * db;
    db = fopen("livrosDB.txt","a");
    struct livro livro;

    system("clear");

    printf("Digite o nome do livro: ");
    fgets(livro.nome,50,stdin);
    printf("Digite o registro do livro: ");
    scanf("%d",&livro.registro);
    printf("Digite o preço do livro: ");
    scanf("%f",&livro.preco);
    getchar();

    formatarNome(livro.nome);

    int c = fgetc(db);

    if(c == EOF){
        fprintf(db,"NOME: %s | REGISTRO: %06d | PREÇO: %.2f\n",livro.nome,livro.registro,livro.preco);
    } else {
        fprintf(db,"\nNOME: %s | REGISTRO: %06d | PREÇO: %.2f",livro.nome,livro.registro,livro.preco);
    }
    
    fclose(db);
}

void lerRegistros(){
    FILE * db;
    db = fopen("livrosDB.txt","r");
    struct livro livro;

    system("clear");

    printf("-=-=> LISTANDO LIVROS! <=-=-\n");

    while (1){

        if(feof(db))
            break;

        fscanf(db,"NOME: %s | REGISTRO: %d | PREÇO: %f ",livro.nome,&livro.registro,&livro.preco);
        printf("NOME: %s | REGISTRO: %d | PREÇO: R$%.2f\n",livro.nome,livro.registro,livro.preco);
    }
    fclose(db);
}

int main(){
    FILE * db;
    db = fopen("livrosDB.txt","a+");

    if(db == NULL){
        printf("Erro na abertura do arquivo database.");
        return 1;
    }

    fclose(db);

    char entrada[3];
    do{
        system("clear");
        printf("O que deseja fazer?\n   -=- [C]riar um registro -=-\n   -=- [L]er os registros -=-\n   -=- [S]air -=-\n   -> Entrada: ");
        scanf("%s",entrada);

        setbuf(stdin,NULL);

        tolower(entrada[0]);

        switch (entrada[0])
        {
        case 'c':
            criarRegistro();
            break;
        case 'l':
            lerRegistros();
            break;
        case 's':
            printf("\nEncerrando!\n");
            return 0;
        
        default:
            break;
        }

        printf("\n\n[Pressione Enter para continuar]");
        while( getchar() != '\n' );

    }while(entrada[0] != 's');
}