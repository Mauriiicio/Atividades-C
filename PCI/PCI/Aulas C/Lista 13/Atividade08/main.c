#include <stdio.h>
int main()

{
	int qntEntrevistado, qtd_FemininoSim = 0, qtd_FemininoNao = 0, qtd_MasculinoSim = 0,qtd_MasculinoNao = 0,  TotalSim = 0, TotalNao = 0, qtdMulheres = 0, qtdHomens = 0;
    float porcH = 0, porcF = 0;
    int teste = 0;
    char sexo, resposta;
    printf("Digite a quantidade de pessoas entrevistadas: \n");
    scanf("%d",&qntEntrevistado);

    for (int i =0; i<qntEntrevistado; i++ ){
		printf("Digite o sexo: \n");
        scanf(" %c", &sexo);
		printf("Digite a resposta: \n");
        scanf(" %c", &resposta);


        if((sexo == 'M' || sexo == 'm' )&& (resposta == 's' || resposta == 'S')){
           qtd_MasculinoSim++;
        }else if((sexo == 'M' || sexo == 'm' )&& (resposta == 'n' || resposta == 'N')){
             qtd_MasculinoNao++;
        }

        if((sexo == 'F' || sexo == 'f' )&& (resposta == 's' || resposta == 'S')){
            qtd_FemininoSim++;
        }
        else if((sexo == 'F' || sexo == 'f' )&& (resposta == 'n' || resposta == 'N')){
           qtd_FemininoNao++;
        }

    }

    TotalSim = qtd_FemininoSim + qtd_MasculinoSim;
    TotalNao = qtd_FemininoNao + qtd_MasculinoNao;


    qtdMulheres = qtd_FemininoSim + qtd_FemininoNao;
    porcF = (float)(100 * qtd_FemininoSim) / qtdMulheres;



    qtdHomens = qtd_MasculinoSim + qtd_MasculinoNao;
    porcH = (float)(100 * qtd_MasculinoNao) / qtdHomens;


    printf("Total Sim: %d\n", TotalSim);
    printf("Total nao: %d\n", TotalNao);

    printf("Porcentagem Feminina que votou sim: %f%%\n", porcF);
    printf("Porcentagem Masculina que votou nao: %f%%\n", porcH);
	return (0);
}
    /*
    Uma certa firma fez uma pesquisa de mercado para saber se as pessoas gostaram ou não de um
    novo produto lançado no mercado. Para isso. forneceu o sexo do entrevistado e sua resposta (sim ou não).
    Sabendo-se que foram entrevistadas 2.000 pessoas, fazer um algoritmo que calcule e escreva:
    • o número de pessoas que responderam sim;
    • o número de pessoas que responderam não;
    • a porcentagem de pessoas do sexo feminino que responderam sim;
    o a porcentagem de pessoas do sexo masculino que responderam não
    */
