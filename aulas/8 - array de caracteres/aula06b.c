/*
Aula do dia 27/09/2023

Array de Caracteres
*/

#include <stdio.h>

int main(){
    char frase[16];

    printf("Digite uma frase: ");
    fgets(frase,16,stdin);
    setbuf(stdin, NULL); //usando fgets
    printf("%s \n",frase);

    printf("Digite a frase novamente: ");
    gets(frase); //usando gets

    printf("%s \n",frase);
    return 0; 

}