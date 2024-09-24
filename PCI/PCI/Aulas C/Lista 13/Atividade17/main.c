#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaração das variaveis
    float lucroesperado, i, ingressos, lucromaximo = 0, preco = 0, totalingressos = 0;

 		ingressos = 120;
 		lucroesperado = (ingressos * 5.0 - 200);

        //repetição controle do valor.
 		for (i = 5 ; i >= 1.0; i--){
            //Esta verificação só vai entrar a primeira vez e mostra o valor de i e o lucro da primeira conta;
			if (i == 5.0){
				printf("PRECO = %.1f LUCRO ESPERADO = %.2f\n",i,lucroesperado);
			}
			//Atualizo a quantidade de ingresso e refaço a conta do lucro esperado
			else{

				ingressos += 26;
				lucroesperado = (i * ingressos) - 200;
				printf("PRECO = %.1f LUCRO ESPERADO = %.2f\n",i,lucroesperado);
			}
			//Esta verificação só entra a primeira vez;
			if ( lucromaximo == 0){
				lucromaximo = lucroesperado;
				preco = i;
				totalingressos = ingressos;
			}
            //Atualizo o lucro maximo, atualiza o preço e o total de ingressos
			else if (lucroesperado > lucromaximo){
				lucromaximo = lucroesperado;
				preco = i;
				totalingressos = ingressos;
			}
		i = i + 0.5; //controle do for, adicinando 0.5;
		}
		//imprimindo o resultado.
		printf("LUCRO MAXIMO = %.2f DO PRECO = %.2f NUMERO DE INGRESSOS VENDIDOS = %.2f\n",lucromaximo,preco,totalingressos);
		return 0;
}
