#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valorProduto, valorDesconto, valorFinal;
    printf("Digite o valor do produto: ");
    scanf("%f", &valorProduto);
    valorDesconto = valorProduto * 0.09;
    valorFinal = valorProduto - valorDesconto;
    printf("O valor com o desconto eh de: %f", valorFinal);




    /*
    8 - Em �pocas de pouco dinheiro, os comerciantes est�o procurando aumentar suas vendas oferecendo desconto.
    Fa�a um programa que possa receber um valor de um produto e que escreva o novo valor tendo em vista que o
    desconto foi de 9%.
    */
}




