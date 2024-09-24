#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
   float valorAcumulado, valorConstante, taxa, numeroMeses, rendimento;
   printf("Digite o Valor Constante: \n");
   scanf("%f", &valorConstante);
   printf("Digite a taxa: \n");
   scanf("%f", &taxa);
   printf("Digite o Numero de meses: \n");
   scanf("%f", &numeroMeses);

    valorAcumulado = valorConstante * pow(1 + taxa,numeroMeses - 1)/taxa;

    printf("%f", valorAcumulado);

}
