#include <stdio.h>
#include <stdlib.h>

int main()
{
    float qtdDollar, DollarDia, Reais;
    printf("Quantidade de dolares guardados: ");
    scanf("%f", &qtdDollar);
    printf("Qual valor do Dollar no dia: ");
    scanf("%f", &DollarDia);
    Reais = qtdDollar * DollarDia;
    printf("R$ %f", Reais);



    /*
    11- Fa�a o programa que calcule o valor em Reais, correspondente aos d�lares que um turista possui no cofre do
    hotel. O programa deve solicitar os seguintes dados: Quantidade de d�lares guardados no cofre e cota��o do d�lar
    naquele dia.
    */
}
