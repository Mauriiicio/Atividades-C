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
    Dado um n�mero de 3 algarismos construir outro n�mero de quatro algarismos de acordo com a seguinte regra: a)
    os tr�s primeiros algarismos, contados da esquerda para a direita s�o iguais aos do n�mero dado; b) o quarto
    algarismo � um d�gito de controle calculado da seguinte forma: primeiro algarismo + segundo algarismo x 3 + terceiro
    algarismo x 5; o d�gito de controle � igual ao resto da divis�o dessa soma por 7

    */
}
