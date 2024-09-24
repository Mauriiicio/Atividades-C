#include <stdio.h>
#include <stdlib.h>

int main()
{
    float precoConvite, custoTeatro, qtdIngressoVendido, lucro;
    printf("Digite o valor do custo: ");
    scanf("%f",&custoTeatro);
    printf("Digite o valor do convite: ");
    scanf("%f",&precoConvite);
    qtdIngressoVendido = custoTeatro / precoConvite;
    lucro = custoTeatro * 1.23 / precoConvite;
    printf("Quantidade de convites para cobrir o custo: R$ %f \n", qtdIngressoVendido);
    printf("Quantidade de convites para cobrir o custo e ter lucro de 23%%: R$ %f \n", lucro);

    /*
    28 - Faça um programa que receba o custo de um espetáculo teatral e o preço do convite esse espetáculo. Esse
    programa deve calcular e mostrar:
    •A quantidade de convites que devem ser vendidos para que pelo menos o custo do espetáculo seja alcançado.
    •A quantidade de convites que devem ser vendidos para que se tenha um lucro de 23%.
    */
}
