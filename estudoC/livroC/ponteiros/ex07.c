/*
Elabore uma função que receba duas strings como parâmetros e verifique
se a segunda string ocorre dentro da primeira. Use aritmética de ponteiros
para acessar os caracteres das strings.
*/

#include <stdio.h>

#define MAXSIZE 255

int stringsIguais(char *pstr, char *psubstr){
    int igual = 0;
    for(int i = 0; pstr[i] != '\n'; i++){
        if(pstr[i] == psubstr[0]){
            for(int j = 0, aux = 0; psubstr[j] != '\n'; j++, aux++){
                if(pstr[i+aux] != psubstr[j]){
                    igual = 0;
                    break;
                }
                igual = 1;
            }
        }
        if(igual)
            return igual;
    }
    return igual;
}

int main(){
    char string[255], substring[255], *pstr = string, *psubstr = substring;
    
    printf("Digite a string: ");
    fgets(pstr,MAXSIZE,stdin); 

    printf("Digite a substring: ");
    fgets(psubstr,MAXSIZE,stdin);

    (stringsIguais(pstr,psubstr) == 1) ? printf("A substring está presente na string.") : printf("A substring não está presente na string");

    return 0;
}