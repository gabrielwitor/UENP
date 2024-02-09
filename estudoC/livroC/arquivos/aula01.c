#include <stdio.h>
#include <stdlib.h>

#ifdef WIN32
#define PAUSE 1
#else
#define PAUSE 0
#endif

int main(){

    FILE *fp;

    fp = fopen("aula01.bin", "wb");

    if(fp == NULL){
        printf("Erro na abertura de arquivo. Fim do programa.\n");
        exit(1);
    }

    fclose(fp);

    if(PAUSE==1)
        system("pause");
    else
        system("read -p \"Pressione enter para sair\" saindo");

    return(0); 
}