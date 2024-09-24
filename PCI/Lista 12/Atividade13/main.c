#include <stdio.h>
#include <stdlib.h>

int main()
{
    float Salariotual, SalarioNovo, porcentagem;
    printf("Digite o salário atual: ");
    scanf("%f", &Salariotual);
    if (Salariotual <= 900)
    porcentagem = 1.13;
    else
    if (Salariotual <= 1100)
    porcentagem = 1.11;
    else
    if (Salariotual <= 1500)
    porcentagem = 1.09;
    else
    porcentagem = 1.07;
    SalarioNovo = Salariotual * porcentagem;
    printf("Salario com aumento: %.2f ", SalarioNovo);
}


