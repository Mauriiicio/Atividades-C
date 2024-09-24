#include "stdio.h"
#include "string.h"
#define MAX 5
void main(void){
    int i, existe=0;
    char nome[40], *list[MAX]={"Maria","Gesiel","Lucas","Poliana","Juliana"};
    printf("Digite seu nome : ");
    scanf ("%s", nome);

    for(i=0;i<MAX;i++)
        if(strcmp(list[i],nome) == 0)

    existe = 1;

    if(existe)
        printf("Voce esta na lista, tem permissao para entrar !");
    else
        printf("Vc nao faz parte da lista ! ");
}
