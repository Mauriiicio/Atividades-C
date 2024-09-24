#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaracao das variaveis
    int cont;
    float matrizA[5][6], x, z,n;

    //Primeira linha
    matrizA[0][0] = 175;
    matrizA[0][1] = 225;
    matrizA[0][2] = 10;
    matrizA[0][3] = 9000;
    matrizA[0][4] = 3.7;
    matrizA[0][5] = 4.75;

    //segunda linha
    matrizA[1][0] = 9.8;
    matrizA[1][1] = 100;
    matrizA[1][2] = 363;
    matrizA[1][3] = 432;
    matrizA[1][4] = 156;
    matrizA[1][5] = 18;

    //terceira linha
    matrizA[2][0] = 40;
    matrizA[2][1] = 301;
    matrizA[2][2] = 30.2;
    matrizA[2][3] = 6381;
    matrizA[2][4] = 1;
    matrizA[2][5] = 0;

    //Quarta linha
    matrizA[3][0] = 402;
    matrizA[3][1] = 4211;
    matrizA[3][2] = 7213;
    matrizA[3][3] = 992;
    matrizA[3][4] = 442;
    matrizA[3][5] = 7321;

    //Quinta linha
    matrizA[4][0] = 21;
    matrizA[4][1] = 3;
    matrizA[4][2] = 2;
    matrizA[4][3] = 1;
    matrizA[4][4] = 9000;
    matrizA[4][5] = 2000;

    //calculando quantos elementos tem no conjunto
    for(int i = 0; i < 5; i++){
        for(int coluna = 0; coluna < 6; coluna++)
        cont = cont + 1;
    }
    //somando duas posicao na matriz
    x = matrizA[2][1] + matrizA[4][0];
    //soma da quarta coluna
    z = matrizA[0][3] + matrizA[1][3] + matrizA[2][3] + matrizA[3][3] + matrizA[4][3];
    //soma da terceira linha
    n = matrizA[2][0] + matrizA[2][1] + matrizA[2][2] + matrizA[2][3] + matrizA[2][4] + matrizA[2][5];
    printf("Numero de elementos do conjunto: %d\n",cont);
    printf("Conteudo identificado por matrizA[4,5]: %.2f\n", matrizA[3][4]);
    printf("Conteudo de X: %.2f\n", x);
    printf("Se referenciar o elemento matrizA[6,2], vai dar um valor inexistente. Esta posicao nao existe. \n");
    printf("A soma da quarta coluna: %.2f\n", z);
    printf("A soma da terceira Linha: %.2f\n", n);

}
