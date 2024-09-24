#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valorCusto, valorVenda, percentualAcrescimo;
    printf("Digite o custo do produto: ");
    scanf("%f", &valorCusto);
    printf("Digite o percentual: ");
    scanf("%f", &percentualAcrescimo);
    percentualAcrescimo = (percentualAcrescimo / 100) * valorCusto;
    valorVenda = valorCusto + percentualAcrescimo;
    printf("Valor de Venda: %f ", valorVenda);



/*
16 - Faça um programa que receba o preço de custo de um produto e mostre o valor de venda. Sabe-se que o preço
de custo receberá um acréscimo de acordo com um percentual informado pelo usuário.

*/
}
