#include <stdio.h>
#include <stdlib.h>

int main()
{
    float precoKwh, qtdKwhMes, totalPagar, maiorConsumo = 0,menorConsumo = -1, consumoR, consumoC, consumoI, mediaConsumo, totalConsumo;
    int numConsumidor = 0, contador = 0;
    char CodigoConsumidor;

    printf("Digite o numero do consumidor: \n");
    scanf("%d", &numConsumidor);

    while(numConsumidor != 0){

        printf("Digite o preco do Kwh consumido: \n");
        scanf("%f", &precoKwh);
        printf("Quantidade de Kwh consumido mes: \n");
        scanf("%f", &qtdKwhMes);
        printf("Digite o codigo do tipo de consumidor - R, C, I: \n");
        scanf(" %c", &CodigoConsumidor);
        totalPagar = precoKwh * qtdKwhMes;
        printf("Total a pagar no mes: %.2f\n", totalPagar);

        totalConsumo = qtdKwhMes + totalConsumo;

        if(CodigoConsumidor == 'r')
            consumoR = consumoR + qtdKwhMes;
        else if(CodigoConsumidor == 'c')
            consumoC = consumoC + qtdKwhMes;
        else if(CodigoConsumidor == 'i')
            consumoI = consumoI + qtdKwhMes;


        if(menorConsumo == - 1 || menorConsumo > qtdKwhMes){
            menorConsumo = qtdKwhMes;
        }
        if(maiorConsumo < qtdKwhMes)
            maiorConsumo = qtdKwhMes;

        printf("Digite o numero do consumidor: \n");
        scanf("%d", &numConsumidor);

        contador++;

    }
        mediaConsumo =(float) totalConsumo / contador;
        printf("Maior consumo mes: %.2f\n", maiorConsumo);
        printf("Menor consumo mes: %.2f\n", menorConsumo);
        printf("Consumo tipo R: %.2f\n", consumoR);
        printf("Consumo tipo C: %.2f\n", consumoC);
        printf("Consumo tipo I: %.2f\n", consumoI);
        printf("Media consumo: %.2f\n", mediaConsumo);

}



                                                        /*
                                                        pre�o do kWh consum�do;
                                                        o n�mero do consumidor;
                                                        � quantidade de kWh consumidos durante o m�s'
                                                        o c�digo do tipo de consum�dor (residencial. co~ercial industrial)
                                                        O n�mero.do consum�dor i~ual a ~ero deve ser usado comof1~g. Fazer ~ algoritmo que:
                                                        o leia os dados descntos aCima;
                                                        o calcule:
                                                        a} para cada consum�dor, o total a pagar,
                                                        b) o maior consumo verificado
                                                        c) o menor COnSUmo veriflcad~.
                                                        d) o total do consumo para cada um dos tr�s tipos de consumidores
                                                        e} a m�dia geral de consumo; ,
                                                        � escreva:
                                                        a) para cad~ consumidor, o seu n�mero e o total a pagar,
                                                        bl o que fOI calculado nos itens b. c, d. e acima especificados.
                                                        */
