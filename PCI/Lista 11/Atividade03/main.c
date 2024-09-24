#include <stdio.h>
#include <stdlib.h>

int main()
{


    int num1[3];

    int numControle1;
    printf("Digite um numero de 3 algorismos: ");
    for(int i = 0; i < 3; i++){
    scanf("%d",&num1[i]);
    }
    numControle1 = (num1[0] + num1[1]) * 3 + num1[2] * 5;
    printf("O numero digitado com o 4 Algorismo eh: %i %i %i %i", num1[0], num1[1], num1[2], numControle1);

    /*
    Dado um número de 3 algarismos construir outro número de quatro algarismos de acordo com a seguinte regra: a)
    os três primeiros algarismos, contados da esquerda para a direita são iguais aos do número dado; b) o quarto
    algarismo é um dígito de controle calculado da seguinte forma: primeiro algarismo + segundo algarismo x 3 + terceiro
    algarismo x 5; o dígito de controle é igual ao resto da divisão dessa soma por 7

    */
}
