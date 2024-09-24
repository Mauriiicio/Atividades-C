#include <stdio.h>
#include <stdlib.h>

int main()
{
    float tempoViagem, velocidade, distancia;
    printf("Tempo gasto na viagem: ");
    scanf("%f",&tempoViagem);
    printf("Digite a velocidade media: ");
    scanf("%f",&velocidade);
    distancia = tempoViagem * velocidade;
    distancia = distancia / 12;
    printf("Combustivel gasto: %f", distancia);

    /*
    29 - Elabore um programa para efetuar o cálculo da quantidade de combustível gasto em uma viagem, utilizando-se
    um automóvel que faz 12 Kms por litro. Para obter o cálculo, o usuário deverá fornecer o tempo gasto e a velocidade
    média durante a viagem. Desta forma, será possível obter a distância percorrida (distância = tempo * velocidade).

    */
}
