#include "stdio.h"
void main(void){
    int x = 5 , y = 6; //declracao das variaveis x valendo 5 e y valendo 6
    int *px,*py; //declaracao de dois ponteiros *px e * py

        px = &x; //px esta apontando o endereço da variavel x
        py = &y; // py esta apontando o endereco da varivavel y

    if(px < py) //faz uma verificacao se o endereço de px é menor que py
        printf("py-px = %u\n",py-px);
    else
        printf("px-py = %u\n",px-py);

    printf("px = %u, *px = %d, &px = %u\n",px,*px,&px);
    printf("py = %u, *py = %d, &py = %u\n",py,*py,&py);
    px++;
    printf("px = %u, *px = %d, &px = %u\n",px,*px,&px);
    py=px+3;
    printf("py = %u, *py = %d, &py = %u\n",py,*py,&py);
    printf("py-px = %u\n",py-px);
}
