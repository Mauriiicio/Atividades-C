#include <stdio.h>
#include <stdlib.h>

int main()
{
  float custoFabrica, custoConsumidor;
  printf("Digite o cuto de Fabrica: ");
  scanf("%f", &custoFabrica);
  custoConsumidor = custoFabrica + (0.45 * custoFabrica);
  custoConsumidor = custoConsumidor +(0.28 * custoConsumidor);
  printf("O valor ao consumidor e: R$ %f ", custoConsumidor);



  /*

  17 - O custo ao consumidor de um carro novo � a soma do custo de f�brica com a percentagem do distribuidor e dos
    impostos (aplicados, primeiro os impostos sobre o custo de f�brica, e depois a percentagem do distribuidor sobre o
    resultado). Supondo que a percentagem do distribuidor seja de 28% e os impostos 45%. Escrever um programa que
    leia o custo de f�brica de um carro e informe o custo ao consumidor do mesmo.
  */

}
