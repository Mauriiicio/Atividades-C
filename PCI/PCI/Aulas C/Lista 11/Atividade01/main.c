#include <stdio.h>
#include <stdlib.h>

int main()
{
    char produto[15];
    float precoAtual, precoAnterior, algebrica, percentual;
    printf("Digite o nome do produto: ");
    scanf("%s", produto);
    printf("Digite o preço Atual: ");
    scanf("%f", &precoAtual);
    printf("Digite o preço Anterior: ");
    scanf("%f", &precoAnterior);
    algebrica = precoAtual - precoAnterior;
    percentual = algebrica * 100 / precoAnterior;
    printf("O produto %s esta R$ %f mais caro, o que corresponde a um aumento de %f %%.", produto, algebrica, percentual);

}
