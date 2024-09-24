#include <stdio.h>
#include <stdlib.h>

int main()
{
    float alturaDegrau, alturaDesejada, aux;
    printf("Digite a altura que deseja subir: ");
    scanf("%f",&alturaDesejada);
    printf("Digite a altura do degrau: ");
    scanf("%f",&alturaDegrau);
    aux = alturaDesejada / alturaDegrau;
    printf("A quantidade de degrau para subir: %f", aux);
    /*
    23 - Cada degrau de uma escada tem uma altura X. Faça um programa que receba essa altura e a altura que o
    usuário deseja alcançar subindo a escada. Calcule e mostre quantos degraus o usuário deverá subir para atingir seu
    objetivo.

    */
}
