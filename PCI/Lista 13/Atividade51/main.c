#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaracao das variaveis
    float perdaCarga, vazao, diamTubo = 1, coeRugosidade = 0;
    //repeticao com a flag 0
    while(diamTubo != 0){
        //recebendo valores
        printf("Digite o diamentro: ");
        scanf("%f", &diamTubo);
        if(diamTubo != 0){
            printf("Informe a rugosidade: ");
            scanf("%f", &coeRugosidade);
            //calculo da perda de carga
            for(vazao = 0.1; vazao < 10; vazao++ ){
                perdaCarga = pow(vazao,1.85)*10.643 * pow(diamTubo,4.87) * pow(coeRugosidade, -1.85);
                printf("Vazao: %.2f\t", vazao);
                printf("Perda Carga: %.2f\n", perdaCarga);
            }
        }
    }
}
