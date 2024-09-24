#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaração das variaveis
   float soma = 0, T = 1;
   int num = 63, fatorial = 1, aux = 1, cont = 0;
   //repeticao e realizacao do calculo
   do{
    T = num / fatorial;
    soma = soma + T;
    num = num - 2;
    fatorial = fatorial * aux;
    aux = aux + 1;
    //numero de vezez que entrou no laco para calcular os termos.
    cont = cont + 1;
    //contador de repeticao
   }while(T >= 0.0000001);
   printf("Valor de S: %.2f \n", soma);
   printf("Termos ultilizados: %d ", cont);
}
