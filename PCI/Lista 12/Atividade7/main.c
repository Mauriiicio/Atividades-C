#include <stdio.h>
#include <stdlib.h>

int main()
{
   int idade, anoNasc, aux;
   printf("Digite o ano de nascimento: ");
   scanf("%d", &anoNasc);
   idade = 2021 - anoNasc;
   if(anoNasc > 2021)
    printf("Ano invalido ");
   else
    printf("Idade: %d ", idade);

}

