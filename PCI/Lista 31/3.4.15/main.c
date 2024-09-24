#include <stdio.h>
#include <stdlib.h>
#include<math.h>
float fatorial(int numero){
    int i;
	int resultado = 1;
	if(numero > 1)
	{
		for (i = 2; i <= numero; i++)
		{
			resultado *= i;
		}
	}

	return resultado;
}


int main()
{
   float sequencia = 1; //sequencia e
	int nTermos = 1;
	int i = 2;


    while(abs(exp(1) - sequencia) <= 0,0001 && nTermos < 100){
		sequencia += 1 / fatorial(i);
		nTermos++;
		i++;
		printf("Termos: %d   Sequencia: %f\n", nTermos, sequencia);
    }
}
