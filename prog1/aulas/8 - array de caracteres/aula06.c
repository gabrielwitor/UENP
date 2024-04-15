/*
Aula do dia 27/09/2023

Array de Caracteres
*/

#include <stdio.h>

int main(){
    char str[10];
    fgets(str,50,stdin);
    setbuf(stdin, NULL); //limpar buffer do teclado
    
    printf("%s",str);

    return 0;
}