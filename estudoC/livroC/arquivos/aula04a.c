#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int get_id (){
    FILE * arch;

    arch = fopen("db.txt","r"); // TODO ERROR HANDELING

    int c = fgetc(arch);

    if (c == EOF) {
        /* file empty, error handling */
        return 0;
    } else {
        ungetc(c, arch);
    }

    char line[255];

    int last_id;
    
    while(1){

        fgets(line,255,arch);

        if (feof(arch)){
            break;
        }
        
        last_id = atoi(&line[0]);
    }

    return last_id + 1;
}

int main(){

    FILE * arch;

    int product_quantity, register_product;
    float product_price;

    char product_name[50];

    printf("How many products do you want to register? ");
    scanf("%d",&register_product);

    for(int i = 0; i < register_product; i++){

        arch = fopen("db.txt","a+");

        system("clear");

        setbuf(stdin,NULL);
        
        printf("Type the name of the product: ");
        fgets(product_name,50,stdin);

        product_name[strcspn(product_name, "\n")] = 0;

        printf("Now, type the product quantity: ");
        scanf("%d",&product_quantity);

        printf("Type the product price: $");
        scanf("%f",&product_price);

        fprintf(arch,"%d | %s | %d | %.2f \n",get_id(), product_name, product_quantity, product_price);

        fclose(arch);
    }

    return 0;
}