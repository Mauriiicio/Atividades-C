#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor, sobra, novoValor = 0;
	scanf("%i", &valor);

	for (int j = 0; j < 6; j++) {
		sobra = valor - ((valor / 10)*10);
    	valor = valor / 10;
		novoValor += sobra * pow(2,j);
	}
	printf("Decimal: %i \n", novoValor);







    /*
    5. Faça um programa que dado um número inteiro que representa um número binário de cinco dígitos, determine o
    seu equivalente decimal.
    */
}
