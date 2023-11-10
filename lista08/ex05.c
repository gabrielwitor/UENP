#include <stdio.h>

int main () {
    int x, y = 27; //x declarado, y = 27
    
    int *pt1 = &x; // pt1 aponta pra x

    int *pt2 = &y;// pt2 aponta pra y

    int **ppt = &pt1; //ppt aponta pra pt1

    **ppt = *pt2; //o dado apontado por ppt (dado apontado por pt1) passa a valer o dado apontado por pt2 (y)

    (*pt2)++; //incremento no dado apontado por pt2 (y = 28)

    x--; // decremento no x (x = 26)
    printf("%d %d\n", *pt1, *pt2); // 26,28

    (**ppt) += --(*pt2); //o dado apontado por ppt (dado apontado por pt1) (x) é somado com o dado apontado por pt2 (y) decrementado
    // x = 26 + 27  x = 53

    printf("%d\n", **ppt); //53
    printf("%d %d\n", x, y); // 53, 27
    printf("%d\n", pt1 == &y); //0
    printf("%d\n", &x != pt2); //1

    return 0;
}