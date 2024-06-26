/*
Implemente um programa que leia 50 números e armazene-os em um arquivo binário.
Depois, leia os numeros gravados no arquivo e mostre na tela a soma desses numeros.
*/

#include <stdio.h>
#include <stdlib.h>

int main () {

    int vetorA [50], vetorB[50];

    FILE * arq = fopen ("numeros.bin", "wb");
    FILE * arq2 = fopen("numeros.bin","rb");

    if ( arq == NULL ) {
        printf ("Erro na criação");
        exit(1) ;
    }

    for(int i = 0; i < 50; i++){
        printf("Digite VetorA[%d]:",i);
        scanf("%d",&vetorA[i]);
    }

    fwrite (vetorA, sizeof ( int) , 50 ,arq);
    fclose (arq);

    fread(vetorB,sizeof(int),50,arq2);

    int soma = 0;

    printf("Valores lidos!\n");
    for(int i = 0; i < 50; i++){
        printf("VetorB[%d]: %d\n",i,vetorB[i]);
        soma += vetorB[i];
    }

    printf("Soma do vetor: %d",soma);
    fclose(arq2);
    return 0;
}
