#include <stdio.h>

struct data
{
    int dianasc;
    int mesnasc;
    int anonasc;
};

struct cliente
{
    int codigo;
    char nome[50];
    struct data datadenasc;
    int sexo;
};


int main(){
    struct cliente c[3];

    for(int i = 0; i < 3; i++){
        
        setbuf(stdin,NULL);
        printf("\nDigite o nome do aluno [%d]: ",i);
        fgets(c[i].nome,50,stdin);

        setbuf(stdin,NULL);
        printf("Digite o codigo do aluno [%d]: ",i);
        scanf("%d",&c[i].codigo);

        setbuf(stdin,NULL);
        printf("Digite a data de nascimento do aluno [%d]: (formato dd mm aa) ",i);
        scanf("%d%d%d",&c[i].datadenasc.dianasc,&c[i].datadenasc.mesnasc,&c[i].datadenasc.anonasc);

        printf("Digite o sexo do aluno [%d]: (0 - Masculino | 1 - Feminino) ",i);
        scanf("%d",&c[i].sexo);
    }

    for(int i = 0; i < 3; i++){
        printf("\n\nDados do aluno [%d]: ",i);

        printf("\nNome do aluno: %s",c[i].nome);

        printf("Codigo do aluno: %d",c[i].codigo);

        printf("\nData de nascimento do aluno : %d/%d/%d",c[i].datadenasc.dianasc,c[i].datadenasc.mesnasc,c[i].datadenasc.anonasc);

        printf("\nSexo do aluno: ");

        (c[i].sexo == 0) ? printf("Masculino") : printf("Feminino");
    }

    return 0;
}