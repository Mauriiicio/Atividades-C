#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
   printf("Digite um numero: ");
   scanf("%d", &numero);
   if(numero % 3 == 0 && numero % 7 == 0)
     printf("Este numero e divisivel por 3 e por 7");
   else
     printf("Este numero nao e divisivel por 3 e por 7");
}



