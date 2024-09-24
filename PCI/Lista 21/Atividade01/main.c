#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaração das variaveis
    int numeroDias = 0;
    float menorTemp = 0, maiorTemp = 0, mediaTemp = 0, soma = 0, vetorTemp[121];
    //repeticao para percorrer os 121 dias e digitar as temperaturas;
    for(int i = 0; i < 121; i++){
        printf("Digite a Temperatura: ");
        scanf("%f", &vetorTemp[i]);
        //entra e atribui a menor temperatura
        if(vetorTemp[i] < menorTemp || i == 0){
            menorTemp = vetorTemp[i];
        }
        //entra e atribui a maior temperatura
        if(vetorTemp[i]> maiorTemp || i == 0){
            maiorTemp = vetorTemp[i];
        }
        //acumula a soma para fazer a media
        soma = soma + vetorTemp[i];

    }
        //media
        mediaTemp = soma / 121;
        //repeticao para percorre o vetor e ver a menor temperatudo abaixo da media
        for(int j = 0; j < 121; j++){
            if(vetorTemp[j]< mediaTemp)
               numeroDias = numeroDias + 1;
        }
        //imprime os valores;
        printf("Menor temperatuda: %.2f\n", menorTemp);
        printf("Maior temperatuda: %.2f\n", maiorTemp);
        printf("Media das temperatuda: %.2f\n", mediaTemp);
        printf("Dias inferior a media: %.2f\n", numeroDias);

}
