/*
Um programa simples para escrever e ler um arquivo.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE * arch;

    char string[255], c;

    arch = fopen("cooltext.txt","r");

    if(arch == NULL){
        printf("O arquivo não existe. Criando-o agora.");
        arch = fopen("cooltext.txt","w+");
    } else {
        printf("O arquivo existe e foi aberto com sucesso.");
        arch = fopen("cooltext.txt","a+");
    }

    printf("\nDigite o texto que será escrito no arquivo: ");
    fgets(string,255,stdin);

    for(int i = 0; i < strlen(string); i++)
        fputc(string[i], arch);

    printf("\nO que foi lido no arquivo: \n");
    
    arch = fopen("cooltext.txt","r");

     while ((c = fgetc(arch)) != EOF)
        printf("%c",c);

    fclose(arch);

    return 0;
}