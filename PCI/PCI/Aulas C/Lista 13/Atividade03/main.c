#include <stdio.h>
#include <stdlib.h>

int main()
{

    int fahrenheit;
	float centigrados=0;
	for (fahrenheit = 50; fahrenheit <= 150; fahrenheit++){
		centigrados = (float)5 / 9 * (fahrenheit - 32);
		printf("Valor de F = %d Valor de C = %.2f\n",fahrenheit, centigrados);
		}

}
