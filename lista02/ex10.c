
#include <stdio.h>

int main(){

    int entrada, interfaceGrafica = 0, inteligenciaArtificial = 0, encapsulamento = 0, indentacao = 0, usoDeStructs = 0;

    printf("\nSeja bem vindo ao sistema de checagem de trabalho. Note que existem requisitos minimos que devem ser atendidos.\n\n");

    printf("==============================================================\n");
    printf("| Requisito 1 = Interface Grafica OU Inteligencia Artificial |\n");
    printf("==============================================================\n");
    printf("| Requisito 2 = Encapsulamento E Indentacao                  |\n");
    printf("==============================================================\n");
    printf("| Requisito 3 = Uso de Structures                            |\n");
    printf("==============================================================\n\n");

    printf("Lista de requisitos:\n");

    printf("=====================================\n");
    printf("| Entrada | Requisito               |\n");
    printf("=====================================\n");
    printf("|   [1]   | Interface Grafica       |\n");
    printf("=====================================\n");
    printf("|   [2]   | Inteligencia Artificial |\n");
    printf("=====================================\n");
    printf("|   [3]   | Encapsulamento          |\n");
    printf("=====================================\n");
    printf("|   [4]   | Indentacao              |\n");
    printf("=====================================\n");
    printf("|   [5]   | Uso de Structures       |\n");
    printf("=====================================\n");
    printf("    [6] para finalizar requisitos    \n");

    while (entrada != 6)
    {
        printf("\nDigite a entrada: ");
        scanf("%i",&entrada);

        switch (entrada)
        {
        case 1:
            
            printf("\nO programa possui o requisito interface grafica? [1] Sim [0] Nao\n");
            scanf("%i",&interfaceGrafica);
            break;

        case 2:
            printf("\nO programa possui o requisito inteligencia artificial? [1] Sim [0] Nao\n");
            scanf("%i",&inteligenciaArtificial);
            break;

        case 3:
            printf("\nO programa possui o requisito inteligencia artificial? [1] Sim [0] Nao\n");
            scanf("%i",&encapsulamento);
            break;

        case 4:
            printf("\nO programa possui o requisito indentacao? [1] Sim [0] Nao\n");
            scanf("%i",&indentacao);
            break;

        case 5:
            printf("\nO programa possui o requisito uso de structs? [1] Sim [0] Nao\n");
            scanf("%i",&usoDeStructs);
            break;

        case 6:
            break;

        default:
            printf("\nEntrada invalida!\n");
            break;
        }

    }

    if ((interfaceGrafica == 1 || interfaceGrafica == 1) && (encapsulamento == 1 && indentacao == 1) && usoDeStructs == 1)
    {
        printf("\nO aluno sera avaliado.\n");
    } else{
        printf("\nO aluno tirou nota 0.\n");
    }
    
    system("pause");
    return 0;
}