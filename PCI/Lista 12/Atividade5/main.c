#include <stdio.h>
#include <stdlib.h>

int main()
{
   int numero;
   printf("Digite um numero: ");
   scanf("%d", &numero);
   if(numero % 5 == 0)
     printf("Este numero e divisivel por 5");
   else
     printf("Este numero nao e divisivel por 5");
}


//Faça um programa que permita a leitura de um numero e informe se ele é ou não é divisível por 5.
