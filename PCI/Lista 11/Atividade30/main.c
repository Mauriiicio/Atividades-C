#include <stdio.h>
#include <stdlib.h>

int main()
{
    float qtdEleitores, qtdVotoCandito01, qtdVotoCandito02, porcentoVoto01, porcentoVoto02, votoNulo;
    printf("Quantidade de Eleitores: ");
    scanf("%f", &qtdEleitores);
    printf("Quantidade votos candidato 1: ");
    scanf("%f", &qtdVotoCandito01);
    printf("Quantidade votos candidato 2: ");
    scanf("%f", &qtdVotoCandito02);
    porcentoVoto01 = qtdVotoCandito01 / qtdEleitores * 100;
    porcentoVoto02 = qtdVotoCandito02 / qtdEleitores * 100;
    votoNulo = (qtdEleitores - (qtdVotoCandito01 + qtdVotoCandito02)) / qtdEleitores * 100;
    printf("Porcentagem de votos do candidato 01: %f %% \n", porcentoVoto01);
    printf("Porcentagem de votos do candidato 02: %f %% \n", porcentoVoto02);
    printf("Porcentagem de votos Nulo : %f %% \n", votoNulo);

    //Nao consegue fazer com valor inteiro, por algum motivo o resultado so ficava 0;


    /*
    30 - Considerando uma eleição de apenas 2 candidatos, elabore um programa que leia do teclado o número total de
    eleitores, o número de votos do primeiro candidato e o número de votos do segundo candidato. Em seguida, o
    programa deverá apresentar o percentual de votos de cada um dos candidatos e o percentual de votos nulos.

    */
}
