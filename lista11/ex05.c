/*
Implemente uma função recursiva que receba dois números inteiros x e n e calcule o valor
de x^n.
*/
#include <stdio.h>

int expo(int x, int n){
    if (n == 1)
        return x;
    return x * expo(x,n-1);
}

int main(){
    int x, n;

    printf("Digite dois valores: ");
    scanf("%d%d",&x,&n);

    printf("%d ^ %d = %d\n",x,n,expo(x,n));

    return 0;
}