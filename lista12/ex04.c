/*
Implemente um programa que leia os nomes de dois arquivos texto. Depois, crie um terceiro
arquivo texto contendo o conteúdo do primeiro seguido do conteúdo do segundo.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    char arquivoA[50], arquivoB[50];

    printf("Digite o nome dos dois arquivos: ");
    scanf("%s %s",arquivoA,arquivoB);

    getchar();

    FILE * arqA = fopen(arquivoA,"r");
    FILE * arqB = fopen(arquivoB,"r");

    if((arqB == NULL)){
        printf("Houve um erro ao acessar esses arquivos. Encerrando.");
        exit(1);
    }

    char string[255];

    FILE * arqC = fopen("combinar.txt","w");

    char buffer[4096];
    while (fgets(buffer, sizeof(buffer), arqA) != NULL)
    {
        fputs(buffer, stdout);
        fputs(buffer, arqC);
    }

    fprintf(arqC," ");
    fputs(" ", stdout);

    while (fgets(buffer, sizeof(buffer), arqB) != NULL)
    {
        fputs(buffer, stdout);
        fputs(buffer, arqC);
    }

    fclose(arqA);
    fclose(arqB);
    fclose(arqC);

    return 0;
}