#include <stdio.h>
#include <stdlib.h>

int main()
{
    float precoOriginal, precoCobrado, desconto, descontoporcento;
    printf("Digite o preco Original: ");
    scanf("%f", &precoOriginal);
    printf("Digite o preco Cobrado: ");
    scanf("%f", &precoCobrado);
    desconto = (precoCobrado * 100) / precoOriginal;
    descontoporcento = precoOriginal - precoCobrado;
    printf("O desconto do produto eh de %f %%",descontoporcento);

}
