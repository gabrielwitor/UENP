/*
Implemente um programa que (a) escreva em um arquivo um conjunto de dados formatados
sobre livros, como por exemplo, o título do livro, o número de registro e o preco do livro. Em
seguida, implemente outro programa que (b) leia os dados do arquivo criado anteriormente
e mostre os dados lidos na tela.
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

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
    char nome[50];
    int registro;
    float preco;

    system("clear");

    printf("Digite o nome do livro: ");
    fgets(nome,50,stdin);
    printf("Digite o registro do livro: ");
    scanf("%d",&registro);
    printf("Digite o preço do livro: ");
    scanf("%f",&preco);
    getchar();

    formatarNome(nome);

    int c = fgetc(db);

    if(c == EOF){
        fprintf(db,"NOME: %s | REGISTRO: %06d | PREÇO: %.2f\n",nome,registro,preco);
    } else {
        fprintf(db,"\nNOME: %s | REGISTRO: %06d | PREÇO: %.2f",nome,registro,preco);
    }
    
    fclose(db);
}

void lerRegistros(){
    FILE * db;
    db = fopen("livrosDB.txt","r");
    char nome[50];
    int registro;
    float preco;

    system("clear");

    printf("-=-=> LISTANDO LIVROS! <=-=-\n");

    while (1){

        if(feof(db))
            break;

        fscanf(db,"NOME: %s | REGISTRO: %d | PREÇO: %f ",nome,&registro,&preco);
        printf("NOME: %s | REGISTRO: %d | PREÇO: R$%.2f\n",nome,registro,preco);
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