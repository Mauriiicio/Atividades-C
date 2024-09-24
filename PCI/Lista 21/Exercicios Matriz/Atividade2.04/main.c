#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaracao das variaveis
    int A[2][4], B[2][4], C[2][4];
    //declarando valores no vetor A
    //linha 0
    A[0][0] = 7;
    A[0][1] = 8;
    A[0][2] = 4;
    A[0][3] = 9;
    //Linha 1
    A[1][0] = 2;
    A[1][1] = 1;
    A[1][2] = 7;
    A[1][3] = 3;
    //Declarando valores no vetor B
    //Linha0
    B[0][0] = 6;
    B[0][1] = 9;
    B[0][2] = 11;
    B[0][3] = 15;
    //linha1
    B[1][0] = 32;
    B[1][1] = 19;
    B[1][2] = 3;
    B[1][3] = 4;
    //somando os valor de A e B e colocando na matriz C
    for(int linha = 0; linha < 2; linha ++){
        for(int coluna = 0; coluna <4; coluna ++){
            C[linha][coluna] = A[linha][coluna] + B[linha][coluna];
        printf("Matriz C: %d", C[linha][coluna]);
        printf(" \n");
        }
    }

}
