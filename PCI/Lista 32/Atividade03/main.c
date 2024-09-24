    #include "stdio.h"
#include "string.h"
#define MAX 5 //definição do valor da varivael MAX;
void main(void){
    //declaração das variaveis.
    int i, existe = 0;
    char nome[40], *list[MAX]={"Maria","Gesiel","Lucas","Poliana","Juliana"};//declaracao do vetor de caracter e uma lista com ponteiro.

    printf("Digite seu nome : ");
    scanf ("%s", nome);
    //for para percorre a matriz com os nome ja declarados
    for(i = 0; i < MAX; i++)
    if(strcmp(list[i],nome) == 0)//verifica de tem o mesmo nome digitado.
    existe = 1;

    if(existe)//caso o existente tenha o valor de 1 ele é true e entra na verificacao.
    printf("Voce esta na lista, tem permissao para entrar !");

    else//caso nao ele entra aqui.
    printf("Vc nao faz parte da lista ! ");
}
