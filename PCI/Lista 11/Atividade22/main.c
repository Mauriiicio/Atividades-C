#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valorDeposito, valorTaxaJuros, aux;
    printf("Digite o valor do deposito: ");
    scanf("%f", &valorDeposito);
    printf("Digite o valor da taxa de juros: ");
    scanf("%f", &valorTaxaJuros);
    aux = valorDeposito + (valorDeposito * valorTaxaJuros / 100);
    printf("Valor do rendimento: R$ %f", aux);


    /*
    22 - Fa�a um programa que receba o valor de um dep�sito e o valor da taxa de juros, calcule e mostre o valor do
    rendimento e o valor total depois do rendimento.
    */
}
