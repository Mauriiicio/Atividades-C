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

  17 - O custo ao consumidor de um carro novo é a soma do custo de fábrica com a percentagem do distribuidor e dos
    impostos (aplicados, primeiro os impostos sobre o custo de fábrica, e depois a percentagem do distribuidor sobre o
    resultado). Supondo que a percentagem do distribuidor seja de 28% e os impostos 45%. Escrever um programa que
    leia o custo de fábrica de um carro e informe o custo ao consumidor do mesmo.
  */

}
