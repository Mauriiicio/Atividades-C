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
    28 - Fa�a um programa que receba o custo de um espet�culo teatral e o pre�o do convite esse espet�culo. Esse
    programa deve calcular e mostrar:
    �A quantidade de convites que devem ser vendidos para que pelo menos o custo do espet�culo seja alcan�ado.
    �A quantidade de convites que devem ser vendidos para que se tenha um lucro de 23%.
    */
}
