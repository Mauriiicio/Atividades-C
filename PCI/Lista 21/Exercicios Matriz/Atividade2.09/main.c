#include <stdio.h>
#include <stdlib.h>


int main()
{
    char st1[20];
    int respostas[10][5], resposta, qtd_pessoas = 0, i, j;

	for (i = 0; i<10; i++)
	{
		for (j = 0; j < 5; j++)
		{
			respostas[i][j] = 0;
		}

	}

	printf("Informe o nome da pessoa: ");
    scanf("%s",&st1);

	if (strcmp(st1, "VAZIO"))
	{
		do{

			qtd_pessoas = qtd_pessoas + 1;

			for(i = 0; i < 10; i++){
				printf("Pergunta Numero %d -  ", i+1);
				printf("Escolhe uma alternativa 1, 2, 3, 4 ou 5 \n");
				scanf("%d",&resposta);
				switch (resposta)
				{
					case 1:
						respostas[i][resposta-1] = respostas[i][resposta-1] +1;
						break;

					case 2:
						respostas[i][resposta-1] = respostas[i][resposta-1] +1;
						break;

					case 3:
						respostas[i][resposta-1] = respostas[i][resposta-1] +1;
						break;
					case 4:
						respostas[i][resposta-1] = respostas[i][resposta-1] +1;
						break;
					case 5:
						respostas[i][resposta-1] = respostas[i][resposta-1] +1;
						break;

					default:
						printf("Resposta invalida. Coloque outra.\n");
						i--;
						break;
				}
			}
			printf("--------------------------------------------------------------------------------------\n");
			printf("Informe o nome da pessoa: ");
			scanf("%s",&st1);


		}while(strcmp(st1, "VAZIO"));
	}

	for (i = 0; i<10; i++)
	{
	    printf("-------------------------------------------------------------------------------------------\n");
		printf("\n\nRespostas da pergunta %d:\n\n", i+1);
		for (j = 0; j < 5; j++)
		{
			printf("\Numero de respostas %d: %d\n",j+1, respostas[i][j] );
		}

	}

   return 0;
}
