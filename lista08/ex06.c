#include <stdio.h>
    int main () {

    int vet1 [] = {1, 2, 3, 4, 5, 6, 7};
    int vet2 [] = {7, 6, 5, 4, 3, 2, 1};

    int *ptr1 = vet1; //ptr aponta para o endereço do elemento de índice 0 de vet1
    int *ptr2 = vet1 + 3; //ptr2 aponta para o endereço do elemento de índice 3 de vet1
    int *ptr3 = vet2 + 5; //ptr3 aponta para o endereço de elemento de índice 5 de vet2

    (*ptr1)++; // valor do dado apontado por ptr1 (elemento de índice 0 de vet1) é incrementado (vet1[0]++)
    (*ptr2)++; // valor do dado apontado por ptr2 (elemento de índice 3 de vet1) é incrementado (vet1[3]++)
    (*ptr3)--; // valor do dado apontado por pre3 (elemento de índice 5 de vet2) é incrementado (vet2[5]--)

    printf("vet1[0]: %d, vet1[3]: %d\n", vet1 [0], vet1 [3]); //vet1[0]: 2, vet1[3]: 5   
    printf("vet2 [0]: %d, vet2[5]: %d\n", vet2 [0], vet2 [5]);//vet2[0]: 7, vet2[5]: 1

    return 0;
}