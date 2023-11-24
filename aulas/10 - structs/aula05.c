#include <stdio.h>

struct ponto
{
    int x;
    int y;
};

struct novoponto
{
    int x;
    int y;
};



int main(){
    struct ponto p1 = {1,2};
    struct ponto p2;
    struct novoponto p3 = {2,3};
    p2 = p1;

    printf("p2 = (%d,%d)",p2.x,p2.y);

    // p3 = p2; ISSO NAO É ADMISSÍVEL, POIS SÃO DUAS STRUCTS DIFERENTES.

    return 0;
}