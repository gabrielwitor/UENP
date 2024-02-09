/*
Preencher arquivo com array, um elemento por linha
*/

#include <stdio.h>
#include <stdlib.h>

void save_file(){
    int array[5]={1,2,3,4,5};

    FILE * arch;

    arch = fopen("aula04.txt","w");

    if(arch == NULL){
        printf("Erro!\n");
        exit(1);
    }
    for(int i = 0; i < 5; i++)
        fprintf(arch,"%d\n",array[i]);

    fclose(arch);
}

void read_file(){
    FILE * arch;
    char line[255];

    arch = fopen("aula04.txt","r");

    if (arch == NULL){
        printf("Erro!\n");
        exit(1);
    }

    while(1){
        fscanf(arch,"%s",line);
        if(feof(arch))
            break;
        printf("%s\n",line);
    }

    fclose(arch);
}

int main(){

    save_file();
    read_file();

    return 0;
}