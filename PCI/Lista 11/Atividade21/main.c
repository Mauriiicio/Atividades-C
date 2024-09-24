#include <stdio.h>
#include <stdlib.h>

int main()
{
   int anoNascimento, anoAtual, idade2028, Idade;
   printf("Digite o ano de nascimento: ");
   scanf("%d", &anoNascimento);
   printf("Digite o ano atual: ");
   scanf("%d", &anoAtual);
   Idade = anoAtual - anoNascimento;
   idade2028 = 2028 - anoNascimento;
   printf("Sua idade: %d\n", Idade);
   printf("Sua idade em 2028: %d", idade2028);


   /*
   21 - Faça um programa que receba o ano de nascimento de um pessoa e o ano atual, calcule e mostre:
    • A idade dessa pessoa;
    •Quantos anos ela terá em 2028.

   */
}
