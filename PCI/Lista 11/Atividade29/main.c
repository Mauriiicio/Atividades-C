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
    29 - Elabore um programa para efetuar o c�lculo da quantidade de combust�vel gasto em uma viagem, utilizando-se
    um autom�vel que faz 12 Kms por litro. Para obter o c�lculo, o usu�rio dever� fornecer o tempo gasto e a velocidade
    m�dia durante a viagem. Desta forma, ser� poss�vel obter a dist�ncia percorrida (dist�ncia = tempo * velocidade).

    */
}
