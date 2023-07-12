/*
Faça uma função que receba uma determinada hora expressa no formato de horas, minutos e
segundos e, em seguida, transforme no valor correspondente em segundos.
*/

#include <stdio.h>

int seconds(int hours, int minutes, int seconds){
    return hours * 3600 + minutes * 60 + seconds;
}

int main(){
    int h, m, s;

    printf("Digite a hora no formato [hh:mm:ss]: ");
    scanf("%d:%d:%d",&h,&m,&s);

    printf("%d segundos",seconds(h,m,s));

    return 0;
}