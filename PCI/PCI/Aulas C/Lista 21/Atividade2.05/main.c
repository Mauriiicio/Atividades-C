#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declara a variavel que vai ser linha e coluna, pois nao sabemos a dimensao da matriz
    int x, y;
    printf("Declare o valor da Linha: ");
    scanf("%d", &x);
    printf("Declare o valor da Coluna: ");
    scanf("%d", &y);

    //verifica a condicao do enunciado, caso seja falsa o usuario coloca novo valor
    while(x > 20 || y > 30){
        printf("Declare o valor da Linha: ");
        scanf("%d", &x);
        printf("Declare o valor da Coluna: ");
        scanf("%d", &y);
    }
    //declara as matrizes x sendo linha e y coluna
    int matrizA[x][y], matrizB[x][y], matrizC[x][y];

     printf("Matriz A\n");
    //colocando valores na matriz A
    for(int linha = 0; linha < x; linha++){
        for(int coluna = 0; coluna < y; coluna++){
            printf("Linha %d Coluna %d: ",linha, coluna);
          scanf("%d",&matrizA[linha][coluna]);
        }
    }
    printf("Matriz B\n");
    //colocando valores na matriz B
    for(int linha = 0; linha < x; linha++){
        for(int coluna = 0; coluna < y; coluna++){
            printf("Linha %d Coluna %d: ",linha, coluna);
            scanf("%d",&matrizB[linha][coluna]);
        }
    }
    printf("Matriz C\n");
    //calculando os valores da Matriz A e B e colocando em C
    for(int linha = 0; linha < x; linha++){
        for(int coluna = 0; coluna < y; coluna++){
            matrizC[linha][coluna] = matrizA[linha][coluna] + matrizB[linha][coluna];
            printf("%d  ",matrizC[linha][coluna]);
        }
         printf("\n");
    }
}
