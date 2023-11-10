#include <stdio.h>

int main(){
    int x = 5;
    int *p; // declarando o ponteiro p
    p = &x; // p aponta para x

    printf("%d\n",x);
    printf("%d\n",p);
    printf("%d\n",*p); //acessando o valor dentro do ponteiro

    return 0;
}