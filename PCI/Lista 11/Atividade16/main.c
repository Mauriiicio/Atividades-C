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
16 - Fa�a um programa que receba o pre�o de custo de um produto e mostre o valor de venda. Sabe-se que o pre�o
de custo receber� um acr�scimo de acordo com um percentual informado pelo usu�rio.

*/
}
