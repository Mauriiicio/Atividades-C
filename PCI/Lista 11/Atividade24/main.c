#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altura, peso, aux;
    printf("Altura: ");
    scanf("%f",&altura);
    printf("Peso: ");
    scanf("%f",&peso);
    aux = peso / (altura * altura);
    printf("IMC: %f", aux);


    /*
    24 - Fa�a um programa que receba o peso e a altura de uma pessoa e calcule o �ndice de massa corp�rea. Ele mede
    a rela��o entre peso e altura (peso em Kg, dividido pelo quadrado da altura em metros).
    */
}
