#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaração das variaveis
    int numInscricao, TvCor, TvPB, comisaoTVcor = 0, comisaoTVPB = 0;
    float salarioFixo, descontoSalario = 0, salarioTotal = 0, descontoIRPF, salarioLiquido = 0;
    //repeticao do numero de funcionario, mudar para 20 como esta no enunciado
    for(int i = 0; i < 3; i++){
    //leitura dos dados
    printf("%d - Digite o numero da inscricao do funcionario: ", i + 1);
    scanf("%d", &numInscricao);
    printf("Digite o salario fixo: ");
    scanf("%f", &salarioFixo);
    printf("Digite a quantidade de TV a cor vendida: ");
    scanf("%d", &TvCor);
    printf("Digite a quantidade de TV a Preto e branco vendida: ");
    scanf("%d", &TvPB);

    //verificacao da quantidad de televisor vendido
    if(TvCor >= 10){
        comisaoTVcor = TvCor * 100;
        }else if(TvCor < 10){
        comisaoTVcor = TvCor * 50;
        }
        if(TvPB >= 20){
            comisaoTVPB = TvPB * 40;
        }else if(TvPB < 20){
            comisaoTVPB = TvPB * 20;
        }
     //---------------------------------------------
        //desconto de 8% no salario fixo INPS
        descontoSalario = salarioFixo * 8 / 100;
        salarioFixo = salarioFixo - descontoSalario;
    //----------------------------------------------
        //Soma do salario total
        salarioTotal = salarioFixo + comisaoTVcor + comisaoTVPB;
        //verifica se o salario total é maior que 3000 e aplica desconto de 5%
        if(salarioTotal >= 3000){
            descontoIRPF = salarioTotal * 5 / 100;
            salarioLiquido = salarioTotal - descontoIRPF;
        }
        printf("Salario Bruto: %.2f\n", salarioTotal);
        printf("Salario Liquido: %.2f\n", salarioLiquido);
    printf("--------------------------------------------------------------------------------------------\n");

    }






    return 0;
}
