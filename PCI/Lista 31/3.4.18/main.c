#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int qtdDeMDC(int mdc, int numero)
{
  int i;
  int resto;
  scanf ("%d", &mdc);
  for (i = 1; i < 2; i++)
    {
      //printf("Entre com o %do. numero da sequencia: ", i+1);
      scanf ("%d", &numero);

          while (numero != 0){
          resto = mdc % numero;
          mdc   = numero;
          numero = resto;
        }
        printf("Maximo divisor comum: %d\n", mdc);
    }

  return 0;
}

int main()
{

    int numA, numB, maxDivisor;
    for(int i = 0; i < 30; i++){
        printf("Conjunto %d: ", i + 1);
        //scanf("%d %d", &numA, &numB);
        qtdDeMDC(numA, numB);
    }

}
/*
Fazer um algoritmo que:
• leia um conjunto de 30 pares de números inteiros:
• escreva, para cada par de números lidos. os seus valores e os seus divisores comuns. fazendo uso
das sub·rotinas anteriomiente definidas.
*/
