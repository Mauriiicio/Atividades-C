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
    23 - Cada degrau de uma escada tem uma altura X. Fa�a um programa que receba essa altura e a altura que o
    usu�rio deseja alcan�ar subindo a escada. Calcule e mostre quantos degraus o usu�rio dever� subir para atingir seu
    objetivo.

    */
}
