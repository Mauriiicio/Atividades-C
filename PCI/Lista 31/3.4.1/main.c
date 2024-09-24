#include <stdio.h>
#include <stdlib.h>
void calculoEtapa1(float etapa1, float tempopadrao1, float num1, float ponto1){

    etapa1 = tempopadrao1 - num1;

    if (etapa1 < 3){
        ponto1 = 100;
	}else if (etapa1 >= 3 && etapa1 <= 5){
            ponto1 = 80;
    }else{
            ponto1 = 80 - ((etapa1 - 5) / 5);
    }
    printf("Pontos etapa 1: %.2f \n",ponto1);
}

int main()
{
    //declaração das variaveis
    int numeroinscricao,insc_vencedora = 0;
    float num1, num2, num3,tempopadrao1,tempopadrao2,tempopadrao3, etapa1, etapa2, etapa3, ponto1 = 0, ponto2 = 0, ponto3= 0, soma = 0, maiorponto = 0;

    //Informações para o usuario
    printf("Digite o numero da inscricao: ");
    scanf("%d",&numeroinscricao);


	while ( numeroinscricao != 9999){
        printf("Digite o tempo padrao 1: ");
        scanf("%f",&tempopadrao1);
        printf("Digite o tempo padrao 2: ");
        scanf("%f",&tempopadrao2);
        printf("Digite o temp opadrao 3: ");
        scanf("%f",&tempopadrao3);
        printf("Digite o tempo despendido 1: ");
        scanf("%f",&num1);
        printf("Digite o tempo despendido 2: ");
        scanf("%f",&num2);
        printf("Digite o tempo despendido 3: ");
        scanf("%f",&num3);

		etapa2 = tempopadrao2 - num2;
		etapa3 = tempopadrao3 - num3;
//Verificação da etapa 1
         //calculoEtapa1(etapa1,tempopadrao1,num1,ponto1);

//--------------------------------------------------------------
        //verificacao da etapa 2
		if (etapa2 < 3){
			ponto2 = 100;
		}
			else if (etapa2 >= 3 && etapa2 <= 5){
				ponto2 = 80;
			}

				else{
				ponto2 = 80 - ((etapa2 - 5) / 5);
				}
//--------------------------------------------------------------
        //verificação etapa 3
		if (etapa3 < 3){
			ponto3 = 100;
		}
			else if (etapa3 >= 3 && etapa3 <= 5){
				ponto3 = 80;
			}

				else{
				ponto3 = 80 - ((etapa3 - 5) / 5);
				}
//--------------------------------------------------------------
        //somatoria de todos os pontos
		soma = ponto1 + ponto2 + ponto3;

        //verifica quem teve mais pontos e atualiza, a primeira vez sempre entra e atualiza
		if (maiorponto == 0 || soma > maiorponto){
			maiorponto = soma;
			insc_vencedora = numeroinscricao;
			}

        //imprime os resultados da rodada
		printf("Numero de inscricao: %d\n",numeroinscricao);
		calculoEtapa1(etapa1,tempopadrao1,num1,ponto1);
		//printf("Pontos etapa 1: %.2f \n",ponto1);
		printf("Pontos etapa 2 %.2f \n",ponto2);
		printf("Pontos etapa 3 %.2f \n",ponto3);
		printf("Total de Pontos: %.2f\n",soma);

        printf("'---------------------------------------------------------------------------------------------------------------\n");
        //cadastra outro numero de inscrição
        printf("Digite o numero da inscricao: ");
		scanf("%d",&numeroinscricao);

	}
        //Imprime quem venceu
	printf("Vencedor: %d\n",insc_vencedora);


}
