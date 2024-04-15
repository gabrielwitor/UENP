/*
Faca uma funcao que receba como parametros um vetor e seu tamanho. Grave-o em um
arquivo texto. Cada valor do vetor deve ser salvo em uma linha do arquivo.
*/

#include <stdio.h>
#include <stdlib.h>

void escreverArquivo(int * vetorA, int tamanho){
    FILE * arquivo;
    arquivo = fopen("vetorDinamico.txt","w");

    for(int i = 0; i < tamanho; i++){
        fprintf(arquivo,"%d\n",vetorA[i]);
    }
    fclose(arquivo);
}

int lerArquivo(int * vetorB, int tamanho){
    FILE * arquivo;
    arquivo = fopen("vetorDinamico.txt","r");

    if(arquivo == NULL){
        printf("Erro lendo o arquivo.");
        return 1;
    }

    for(int i = 0; i < tamanho; i++){
        fscanf(arquivo,"%d",&vetorB[i]);
    }
    fclose(arquivo);
}

int main(){
    
    int * vetorA, * vetorB, tamanho;

    printf("Digite o tamanho do vetor: ");
    scanf("%d",&tamanho);

    vetorA = (int *) malloc (tamanho*sizeof(int));

    for(int i = 0; i < tamanho; i++){
        printf("Digite o elemento de indice [%d]: ",i);
        scanf("%d",&(vetorA[i]));
    }

    escreverArquivo(vetorA,tamanho);

    vetorB = (int *) malloc (tamanho*sizeof(int));

    lerArquivo(vetorB, tamanho);

    for(int i = 0; i < tamanho; i++){
        printf("%d ",vetorB[i]);
    }

    return 0;
}