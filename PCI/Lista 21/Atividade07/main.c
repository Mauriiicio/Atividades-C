#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qtdProduto, i;
    float faturamento = 0, preco[100];

    for(i = 0; i < 10; i++){
        printf("Preco de venda da Mercadoria %d: ", i + 1);
        scanf("%f", &preco[i]);
    }
    for(i = 0; i < 10; i++){
        printf("quantidade de mercadoria %d Vendida: ", i + 1);
        scanf("%d", &qtdProduto);
        faturamento = faturamento + qtdProduto * preco[i];
    }
    printf("Faturamento mensal: %.2f", faturamento);
}
