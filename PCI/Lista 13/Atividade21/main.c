#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaração das variaveis
    int numOperario, numPecasMes = 0, totalPecas, totalMulherA = 0,totalMulherB = 0,totalMulherC = 0, totalHomemB = 0,totalHomemA = 0, totalHomemC = 0, totalpecaB = 0, totalpecaA = 0, totalpecaC = 0,
    totalpecaC_mulher = 0,totalpecaB_mulher = 0, totalpecaA_mulher = 0;

    float salarioMinimo = 1100, salarioPorcento = 0, folhaMensal = 0, mediaHomemClasseB = 0, mediaHomemClasseC = 0,mediaHomemClasseA = 0, numPecaA = 0,numPecaB = 0,
    numPecaC = 0, numPecaBmulher = 0, numPecaCmulher = 0, mediaMulherClasseB = 0, mediaMulherClasseA = 0, mediaMulherClasseC = 0, maiorSalario = 0;

    char sexo;

    //Numero do operario para verificacao do 1 while;
    printf("Numero do operario: ");
    scanf("%d", &numOperario);

    //repetir enquando o numero do operario for diferente de 0
     while(numOperario != 0){
        printf("Numero de peca mes: ");
        scanf("%d", &numPecasMes);
        printf("Sexo Operario: ");
        scanf(" %c", &sexo);

        //soma o total de peca fabricada mes
        totalPecas = numPecasMes + totalPecas;
        //Verificando o sexo e a media de cada classe
        if(sexo == 'M'){
            //verifica a classe que ele ficou e calcula a media
            if(numPecasMes <= 35 && numPecasMes >= 31){
                totalHomemB = totalHomemB + 1;
                totalpecaB = numPecasMes + totalpecaB;
            }else if(numPecasMes > 35){
               totalHomemC = totalHomemC + 1;
               totalpecaC = numPecasMes + totalpecaC;
            }else{
                totalHomemA = totalHomemA + 1;
                totalpecaA = numPecasMes + totalpecaA;
            }
        }else if(sexo == 'F'){
            //verifica a classe que ele ficou e calcula a media
            if(numPecasMes <= 35 && numPecasMes >= 31){
                totalMulherB = totalMulherB + 1;
                totalpecaB_mulher = numPecasMes + totalpecaB_mulher;
            }else if(numPecasMes > 35){
                totalMulherC = totalMulherC + 1;
                totalpecaC_mulher = numPecasMes + totalpecaC_mulher;
            }else{
                 totalMulherA = totalMulherA + 1;
                 totalpecaA_mulher = numPecasMes + totalpecaA_mulher;
            }
        }

        //verifica se o numero de pecas mes foi entre 31 a 35
        if(numPecasMes <= 35 && numPecasMes >= 31)
        {
            salarioMinimo = 1100;
            numPecasMes = numPecasMes - 30;
            salarioPorcento = salarioMinimo * 3 /100;
            salarioPorcento = salarioPorcento * numPecasMes;
            salarioMinimo = salarioPorcento + salarioMinimo;
        }

         //verifica se o numero de pecas mes foi acima de 35
        else if(numPecasMes > 35)
        {
            salarioMinimo = 1100;
            numPecasMes = numPecasMes - 30;
            salarioPorcento = salarioMinimo * 5 /100;
            salarioPorcento = salarioPorcento * numPecasMes;
            salarioMinimo = salarioPorcento + salarioMinimo;
        }else
            salarioMinimo = 1100;
        printf("Salario: %.2f\n", salarioMinimo);
        //Contagem do total da folha de pagamento
        folhaMensal = folhaMensal + salarioMinimo;
        if(salarioMinimo > maiorSalario)
            maiorSalario = salarioMinimo;
        printf("---------------------------------------------------------------------------\n");
        printf("Numero do operario: ");
        scanf("%d", &numOperario);

    }

    //Calculando a média de pecas e se nao é divisil por 0
    if(totalHomemA!=0)
    mediaHomemClasseA = totalpecaA / totalHomemA;
    if(totalHomemB!=0)
    mediaHomemClasseB = totalpecaB / totalHomemB;
    if(totalHomemC!=0)
    mediaHomemClasseC = totalpecaC / totalHomemC;
    if(totalMulherA!=0)
    mediaMulherClasseA = totalpecaA_mulher / totalMulherA;
    if(totalMulherB!=0)
    mediaMulherClasseB = totalpecaB_mulher / totalMulherB;
    if(totalMulherC!=0)
    mediaMulherClasseC = totalpecaC_mulher / totalMulherC;

    printf("Folha mensal: %.2f\n", folhaMensal);
    printf("Total peca fabricada: %d\n", totalPecas);
    printf("Media Homens Classe A: %.2f\n", mediaHomemClasseA);
    printf("Media Homens Classe B: %.2f\n", mediaHomemClasseB);
    printf("Media Homens Classe C: %.2f\n", mediaHomemClasseC);
    printf("Media Mulher Classe A: %.2f\n", mediaMulherClasseA);
    printf("Media Mulher Classe B: %.2f\n", mediaMulherClasseB);
    printf("Media Mulher Classe C: %.2f\n", mediaMulherClasseC);
    printf("Maior Salario: %.2f\n", maiorSalario);

}
