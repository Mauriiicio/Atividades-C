#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario;
    printf("Digite o salario: ");
    scanf("%f", &salario);
    salario = salario + (salario *37 / 100);
    printf("O salario com aumento de 37%% : R$ %f ", salario);


    /*
    19 - Fa�a um programa que apresente, para um sal�rio informado pelo usu�rio, um novo sal�rio com aumento de
    37%.
    */
}
