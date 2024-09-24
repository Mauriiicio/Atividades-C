#include <stdio.h>
#include <stdlib.h>

int main()
{
    int auxiliar, index, menos10 = 0, entre10e20 = 0, maior20 = 0;
	char nome[20];
	float precocompra, precovenda, porcentagem, totalvenda, totalcompra, lucro, aux;

	index = 0;
	printf("Digite a quantido de produtos: \n");
	scanf("%d",&auxiliar);
	while(index < auxiliar){
		index++;
		printf("Digite o nome do produtos: \n");
		scanf("%s",nome);
		printf("Digite o preco de compra: \n");
		scanf("%f",&precocompra);
		printf("Digite o preco de venda: \n");
		scanf("%f",&precovenda);

		totalcompra += precocompra;
		totalvenda += precovenda;
		lucro = totalvenda - totalcompra;

		aux = precovenda - precocompra;
		porcentagem = (float)(100 * aux) / precocompra;

			if (porcentagem < 10){
				menos10++;
			}
			else if (porcentagem >= 10 && porcentagem <= 20){
				entre10e20++;
			}
			else if (porcentagem > 20){
				maior20++;
			}

}
		printf("%d com lucro < 10%%\n",menos10);
		printf("%d com lucro >= 10%% ou lucro <= 20%%\n",entre10e20);
		printf("%d com lucro > 20%%\n",maior20);
		printf("Total de compra = %.2f\n",totalcompra);
		printf("Total de venda = %.2f\n",totalvenda);
		printf("Lucro = %.2f\n",lucro);


}
