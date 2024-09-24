#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
 * Programa Tipos de Numeros
 *
 */
/* Prototipos*/
void menu();
void encaminha(int );
void leitura(int , int *, int *);
int somadivisores(int );
int primo(int );
int perfeito (int);
int amigos (int,int);

int main(){
    menu();
}
void leitura(int opc, int *n1, int *n2){
 if (opc>0 && opc <5){
     do {
        printf("\n\n###Informe um numero inteiro\n");
        printf("Numero: "); scanf("%d",n1);
    }while (n1<=0);
 }else{
     do {
        printf("\n\n###Informe dois numeros inteiros\n");
        printf("Numero 1: "); scanf("%d",n1);
        printf("Numero 2: "); scanf("%d",n2);
     }while (n1<=0 || n2<=0);
 }
}

int somadivisores(int n){
 int soma=1,cand=2;

 while (cand <sqrt(n)){
    if (n%cand==0)
		soma+=cand+n/cand;
    cand++;
 }
 if (cand==sqrt(n))
    soma+=cand;
 return(soma);
}

int primo(int n){
 int i=2;
 while(i<=sqrt(n)){
    if (n%i==0)
        return(0);
    i++;
 }
return(1);
}

int perfeito (int n){
    int flag;
    flag=somadivisores(n);
    if (flag==n)
        return(1);
    else if (flag>n)
        return(2);
    else
        return(3);
}
int amigos (int n1, int n2){
   if (somadivisores(n1)==n2 && somadivisores(n2)==n1)
    return(1);
   return(0);
}
void encaminha(int opcao){
 int continuar=1, n1, n2;

 leitura(opcao, &n1,&n2);
  switch( opcao ){
  case 1:
    if(primo(n1))
     printf("%d eh primo\n\n", n1);
    else
     printf("%d nao eh primo\n\n", n1);
    break;

  case 2:
    if(perfeito(n1)==1)
     printf("%d eh perfeito\n\n", n1);
    else
     printf("%d nao eh perfeito\n\n", n1);
    break;
  case 3:
    if(perfeito(n1)==2)
     printf("%d eh abundante\n\n", n1);
    else
     printf("%d nao eh abundante\n\n", n1);
    break;
  case 4:
    if(perfeito(n1)==3)
     printf("%d eh defectivo\n\n", n1);
    else
     printf("%d nao eh defectivo\n\n", n1);
    break;
  case 5:
    if(amigos(n1,n2))
     printf("%d e %d sao amigos\n\n", n1,n2);
    else
     printf("%d e %d nao sao amigos\n\n", n1,n2);
    break;
  default:
    printf("Operacao nao identificada\n\n");
 }

 printf("Digite 0 para sair, ou outro numero para continuar: ");
 scanf("%d", &continuar);

 if(continuar)
  menu();
 else
  printf("Saindo do programa...\n");
}


void menu(){
 int opc;
 printf("\n\n# Biblioteca em C de Tipo de Numeros # \n");
 printf("Escolha sua opcao: \n");
 printf("0. Sair,\t ou saber se um numero inteiro eh \n");
 printf("1. Primo\n");
 printf("2. Perfeito\n");
 printf("3  Abundante\n");
 printf("4. Defectivo,\t ou se dois numeros sao\n");
 printf("5. Amigos\n");

 do{
  printf("\nEscolha sua opcao: ");
  scanf("%d", &opc);
 }while(opc<0 || opc > 5);

 if(opc)
  encaminha(opc);
 else
  printf("Saindo do programa...\n");

}
