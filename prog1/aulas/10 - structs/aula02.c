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
    struct cliente c1,c2;

    printf("Digite o codigo do cliente 1: ");
    scanf("%d",&c1.codigo);

    setbuf(stdin,NULL);

    printf("Digite o nome do cliente 1: ");
    fgets(c1.nome,50,stdin);

    printf("Digite o dia de nascimento do cliente 1: ");
    scanf("%d",&c1.dianasc);

    printf("O cliente 1 se chama: %sCodigo: %d\nDia de nascimento: %d\n",c1.nome,c1.codigo,c1.dianasc);


    printf("Digite o codigo do cliente 2: ");
    scanf("%d",&c2.codigo);

    setbuf(stdin,NULL);

    printf("Digite o nome do cliente 2: ");
    fgets(c2.nome,50,stdin);

    printf("Digite o dia de nascimento do cliente 2: ");
    scanf("%d",&c2.dianasc);

    printf("O cliente 2 se chama: %sCodigo: %d\nDia de nascimento: %d\n",c2.nome,c2.codigo,c2.dianasc);


    return 0;
}