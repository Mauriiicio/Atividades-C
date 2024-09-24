#include <stdio.h>
#include <stdlib.h>

int main()
{
    float massaInicial, massaFinal;
	int aux, horas, minutos, segundos, tempo;
    printf("Digite a massaInicial inicial do material: \n");
	scanf("%f",&massaInicial);

	tempo = 0;
	massaFinal = massaInicial;

	while(massaFinal >= 0.5){
		massaFinal = massaFinal / 2;
		tempo = tempo + 50;
	}
	horas = tempo / 3600;
	aux = tempo % 3600;
	minutos = aux / 60;
	segundos = aux % 60;

	printf("massaInicial inicial = %f\n",massaInicial);
	printf("massaInicial final = %f\n",massaFinal);
	printf("Tempo = %d Horas %d Minutos %d Segundos\n",horas,minutos,segundos);

}
