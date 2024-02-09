#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//leitura de arquivo

int main(){

    FILE * arq;

    char c;

    arq = fopen("aula03.txt","r");

    if(arq == NULL){
        printf("Erro na abertura do arquivo.");
        exit(1);
    }

    while ((c = fgetc(arq)) != EOF)
        printf("%c",c);
    

    fclose(arq);

    return 0;
}