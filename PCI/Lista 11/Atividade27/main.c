#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, qtdQuilowatts, valorQuilowatts, valorPago, desconto;
    printf("Digite o valor do Salario: ");
    scanf("%f",&salario);
    printf("Digite o valor de QuiloWatts gasto: ");
    scanf("%f",&qtdQuilowatts);
    valorQuilowatts = salario / 5;
    valorPago = valorQuilowatts * qtdQuilowatts;
    desconto = valorPago * 0.85;
    printf("Valor do QuiloWatts: R$ %f \n", valorQuilowatts);
    printf("Valor a ser pago: R$ %f \n", valorPago);
    printf("Valor com desconto a ser pago: R$ %f \n", desconto);



   /*
   27 - Sabe-se que o quilowatt de energia custa um quinto do sal�rio m�nimo. Fa�a um programa que receba o valor
    do sal�rio m�nimo e a quantidade de quilowatts consumida por uma resid�ncia. Calcule e mostre:
    � O valor, em Reais, de cada quilowatt.
    � O valor, em Reais, a ser pago por essa resid�ncia.
    � O valor, em Reais, a ser pago com desconto de 15%.
   */
}
