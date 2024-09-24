#include <stdio.h>
#include <stdlib.h>

int main()
{
    float distancia, velocidade, tempoMedio, veloMS;
    printf("Digite a distancia do Ponto A ate o Ponto B: ");
    scanf("%f", &distancia);
    printf("Digite a velocidade: ");
    scanf("%f", &velocidade);
    tempoMedio = distancia / velocidade;
    veloMS = (distancia * 1000) / 3600;
    printf("Tempo medio do Ponto A ao Ponto B: %f \n", tempoMedio);
    printf("Velocidade em metros/segundos: %f", veloMS);
    /*
    12 - Faça um programa que após a entrada de uma determinada distância entre dois pontos(Km), e uma determinada
    velocidade(Km/h), diga qual o tempo médio que levará para chegada à esse local e qual a velocidade em
    metros/segundos.
    */
}
