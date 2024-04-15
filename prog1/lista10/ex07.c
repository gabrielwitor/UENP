/*
Defina uma estrutura adequada para armazenar os dados de um livro, contendo: codigo,
titulo, autor e assunto. Com base nessa estrutura, faca o cadastro de livros usando a
alocação dinâmica de memória e depois mostre esses dados na tela. Por fim, implemente
uma funcao que possibilite a busca de um determinado livro por meio de seu codigo. A
busca deve retorna 1 caso o livro seja encontrado e 0, caso contrário.
*/

#include <stdio.h>
#include <stdlib.h>

struct livro{
    int codigo;
    char titulo[255];
    char autor[255];
    char assunto[255];
};

int encontrarLivro(struct livro *livros, int qtd_livros, int codigo){
    for(int i = 0; i < qtd_livros; i++){
        if(livros[i].codigo == codigo)
            return 1;
    }
    return 0;
}

int main(){
    struct livro *livros;
    int n;

    printf("\nQuantidade de livros: ");
    scanf("%d",&n);

    livros = (struct livro *) malloc (n * sizeof(struct livro));

    for(int i = 0; i < n; i++){
        printf("\n");
        setbuf(stdin,NULL);
        printf("Digite o código do livro [%d]: ",i);
        scanf("%d",&livros[i].codigo);

        setbuf(stdin,NULL);
        printf("Digite o titulo do livro: [%d]: ",i);
        fgets(livros[i].titulo, 255, stdin);

        printf("Digite o autor do livro: [%d]: ",i);
        fgets(livros[i].autor, 255, stdin);
        
        printf("Digite o assunto do livro: [%d]: ",i);
        fgets(livros[i].assunto, 255, stdin);
    }

    for(int i = 0; i < n; i++){
        printf("\n----------------------------- [LIVRO %d] ------------------------------\n",i);
        printf("Código do livro [%d]: %d\n",i,livros[i].codigo);
        printf("Titulo do livro: [%d]: %s",i,livros[i].titulo);
        printf("Autor do livro: [%d]: %s",i,livros[i].autor);
        printf("Assunto do livro: [%d]: %s",i,livros[i].assunto);
        printf("-----------------------------------------------------------------------\n");
    }

    int codigo;
    printf("\nDigite um código no livro: ");
    scanf("%d",&codigo);

    if(encontrarLivro(livros,n,codigo)){
        printf("\nO codigo [%d] está presente no banco de dados.",codigo);
    } else {
        printf("\nO codigo [%d] não está presente no banco de dados.",codigo);
    }

    return 0;
}