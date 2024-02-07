/*
A multiplicação de dois números inteiros pode ser feita através de somas sucessivas. Implemente
uma função recursiva que calcule a multiplicação de dois inteiros usando essa ideia.
*/

#include <stdio.h>

int multip(int numA, int numB){
    if (numA == 0||numB == 0)
        return 0;
    return numA + multip(numA,numB-1);
}

int main(){
    int numA, numB;
    printf("Digite dois valores: ");
    scanf("%d %d",&numA,&numB);

    printf("%d*%d = %d\n",numA,numB,multip(numA,numB));

    return 0;
}