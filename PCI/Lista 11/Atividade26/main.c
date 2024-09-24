#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valorDiaria, diariaDesconto, aux, totalcom100porcento, totalcom70porcento, deixaradeGanhar;
    int qtdApartamentos;
    printf("Digite o valor da diaria: ");
    scanf("%f",&valorDiaria);
    printf("Digite a quantidade de apartamentos: ");
    scanf("%d",&qtdApartamentos);
    diariaDesconto = valorDiaria * 0.75;
    totalcom100porcento = diariaDesconto * qtdApartamentos * 2;
    totalcom70porcento = diariaDesconto * 2 * 0.7;
    deixaradeGanhar = valorDiaria * qtdApartamentos * 2 * 0.25;
    printf("O valor da diaria na promocao: R$ %f \n", diariaDesconto);
    printf("O valor com 100%%: %f \n", totalcom100porcento);
    printf("O valor com 70%%: %f \n", totalcom70porcento);
    printf("O valor perdido com o desconto: %f", deixaradeGanhar);

    /*
    26 - Um hotel deseja fazer uma promoção especial de final de semana, concedendo um desconto de 25% na diária.
    Sendo informados, através do teclado, o número de apartamentos do hotel e o valor da diária por apartamento para o
    final de semana completo, elabore um programa para calcular:
     • Valor promocional da diária;
     • Valor total a ser arrecadado caso a ocupação neste final de semana atinja 100%;
     • Valor total a ser arrecadado caso a ocupação neste final de semana atinja 70%;
     • Valor que o hotel deixará de arrecadar em virtude da promoção, caso a ocupação atinja 100%.
    */
}
