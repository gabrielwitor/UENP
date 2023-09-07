/*
Aula do dia 21/06/2023

Estruturas de repetição

do while

Executa comandos

Avalia condição -> Se verdadeira, executa novamente, se não, Para.
*/

#include <stdio.h>

int main(){

    int n;

    printf("Digite o valor: ");
    scanf("%d",&n);

    do
    {
        printf("%d ",n);
        n++;
    } while (n<=10);
    
    return 0; 
}