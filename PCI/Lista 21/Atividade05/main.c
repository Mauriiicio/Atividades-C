#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, nota, vetorFreque[11];
    //atribundo valor zero para todas posicoes do vetor
    for( i  = 0; i < 11; i++){
        vetorFreque[i] = 0;
    }
    //percorrendo o vetor e colocando os valores e somando mudar para 80 como enunciado.
    for( i  = 0; i < 10; i++){
        printf("Digite a %d nota: ", i + 1);
        scanf("%d", &nota);
        switch (nota)
		{
			case 0:
				vetorFreque[0] = vetorFreque[0] + 1;
				break;

			case 1:
				vetorFreque[1] = vetorFreque[1] + 1;
				break;

			case 2:
				vetorFreque[2] = vetorFreque[2] + 1;
				break;

			case 3:
				vetorFreque[3] = vetorFreque[3] + 1;
				break;

			case 4:
				vetorFreque[4] = vetorFreque[4] + 1;
				break;

			case 5:
				vetorFreque[5] = vetorFreque[5] + 1;
				break;

			case 6:
				vetorFreque[6] = vetorFreque[6] + 1;
				break;

			case 7:
				vetorFreque[7] = vetorFreque[7] + 1;
				break;

			case 8:
				vetorFreque[8] = vetorFreque[8] + 1;
				break;

			case 9:
				vetorFreque[9] = vetorFreque[9] + 1;
				break;

			case 10:
				vetorFreque[10] = vetorFreque[10] + 1;
				break;

			default:
				printf("Valor invalido!\n");
		}
    }
    //percorre o vetor e exibe o valor que absoluto e relativo.
    for( i  = 0; i < 11; i++){
            printf("Frequecia absoluta da nota %d: %d\n",i, vetorFreque[i]);
            printf("Frequecia relativa da nota %d: %d\n",i, vetorFreque[i] / 80);
            printf("------------------------------------------------------------\n");
    }

}
