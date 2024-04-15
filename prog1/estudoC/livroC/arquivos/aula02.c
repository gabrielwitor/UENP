#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//escrita de uma frase em um arquivo

int main(){

    FILE *arq;
    char string[255];

    arq = fopen("aula02.txt", "w");

    if(arq == NULL){
        printf("Erro na abertura de arquivo. Fim do programa.\n");
        exit(1);
    }

    printf("Digite a string que será gravada no arquivo: ");
    fgets(string,255,stdin);

    for(int i = 0; i < strlen(string); i++)
        fputc(string[i], arq);

    fclose(arq);

    return(0); 
}