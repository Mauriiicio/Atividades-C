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
    12 - Fa�a um programa que ap�s a entrada de uma determinada dist�ncia entre dois pontos(Km), e uma determinada
    velocidade(Km/h), diga qual o tempo m�dio que levar� para chegada � esse local e qual a velocidade em
    metros/segundos.
    */
}
