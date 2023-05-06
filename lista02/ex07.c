/*
Um escritório de contabilidade deseja realizar o reajuste do salário dos funcionários de todos
os seus clientes. Neste caso, será utilizado como base o reajuste acordado com os sindicatos
de cada categoria, conforme especificado na Tabela 2. Faça um programa que receba o
salário atual, o cargo e calcule o reajuste do salário. O programa deve mostrar o valor do
reajuste e o salário já atualizado.

Código   Cargo                       Reajuste
1        Vendedor(a)                 10%
2        Auxiliar de escrit ́orio     7%
3        Auxiliar de Enfermagem      12%
4        Bibliotecário(a)            11%
*/

#include <stdio.h>

int main(){

    float salario, reajuste;
    int codigo;

    printf("==================================================\n");
    printf("| Codigo   | Cargo                   | Reajuste  |\n");
    printf("==================================================\n");
    printf("| [1]      | Vendedor(a)             | 10%%      |\n");
    printf("| [2]      | Auxiliar de escritorio  | 7%%       |\n");
    printf("| [3]      | Auxiliar de enfermagem  | 12%%      |\n");
    printf("| [4]      | Bibliotecario           | 11%%      |\n");
    printf("==================================================\n");

    printf("Digite o codigo do cargo: ");
    scanf("%i",&codigo);

    printf("Digite o salario atual: ");
    scanf("%f",&salario);

    switch (codigo)
    {
    case 1:
        reajuste = salario * 0.10;
        break;
    
    case 2:
        reajuste = salario * 0.07;
        break;
    
    case 3:
        reajuste = salario * 0.12;
        break;

    case 4:
        reajuste = salario * 0.11;
        break;
    
    default:
        printf("Codigo invalido. Encerrando programa.");
        break;
    }

    printf("\nValor do reajuste: R$%.2f\nSalario atualizado: R$%.2f",reajuste,salario+reajuste);

    return 0;
}