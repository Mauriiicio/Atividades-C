#include <stdio.h>
#include <stdlib.h>

int main()
{
    float segundos, minutos, horas, dias;
    printf("Digite um valor em segundos: ");
    scanf("%f", &segundos);
    minutos = segundos / 60;
    horas = minutos / 60;
    dias = horas / 24;
    printf("O valor digitado em Minutos: %f \n", minutos);
    printf("O valor digitado em Horas: %f \n", horas);
    printf("O valor digitado em Dias: %f ", dias);


    /*
    20 - Elabore um programa que leia do teclado uma quantidade de segundos e transforme este tempo em dias, horas
    e minutos.

    */
}
