/*
Uso de structs

Structs podem ser utilizadas para armazenar varios tipos juntos

22/11/2023
*/

#include <stdio.h>

struct cliente{
    int codigo;
    char nome[50];
    int dianasc;
};

int main(){
    struct cliente c[2]; //10 clientes

    for(int i = 0; i < 2; i++){
        printf("Digite o codigo do cliente [%d]: ",i);
        scanf("%d",&c[i].codigo);

        setbuf(stdin,NULL);

        printf("Digite o nome do cliente [%d]: ",i);
        fgets(c[i].nome,sizeof(c[i].nome),stdin);

        printf("Digite o dia de nascimento do cliente [%d]: ",i);
        scanf("%d",&c[i].dianasc);
    }

    for(int i = 0; i < 2; i++){
        printf("\nCodigo do cliente [%d]: %d",i,c[i].codigo);
        printf("\nNome do cliente [%d]: %s",i,c[i].nome);
        printf("Dia de nascimento do cliente [%d]: %d\n",i,c[i].dianasc);
    }

    return 0;
}