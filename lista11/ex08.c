/*
Implemente uma função recursiva que retorne verdadeiro quando a string dada é um
palíndromo. Palíndromo é uma palavra que é idêntica quando a lemos de frente para trás
e também de trás para frente. Por exemplo, a palavra "arara" é um palíndromo. Já a
palavra "casa" não é um palíndromo.
*/

#include <stdio.h>

int verificaPalin(char * palavra, char letraA, char letraB, int iteracoes, int count, int tam){

    if(letraA != letraB)
        return 0;
    
    if(tam % 2 == 0){ // se par
        if (count == iteracoes)
            return 1;
    } else { // se impar
        if (count == (iteracoes - 1))
            return 1;
    }

    return verificaPalin(palavra, palavra[count], palavra[tam-1-(count)], iteracoes, count+1, tam);
}

int main(){
    int tam;

    printf("Digite o tamanho da palavra: ");
    scanf("%d",&tam);

    char palavra[tam];

    setbuf(stdin,NULL);

    printf("Digite a frase: ");
    scanf("%s",palavra);

    verificaPalin(palavra,palavra[0],palavra[tam-1], tam/2, 0, tam) ? printf("A escrita %s é um palindromo\n",palavra) : printf("A escrita %s não é um palindromo\n",palavra);

    return 0;
}