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
    while(x > 20 || y > 50){
        printf("Declare o valor da Linha: ");
        scanf("%d", &x);
        printf("Declare o valor da Coluna: ");
        scanf("%d", &y);
    }
    //declara as matrizes x sendo linha e y coluna
    int matrizA[x][y], matrizTransposta[y][x];

     printf("\nMatriz A\n");
    //colocando valores na matriz A
    for(int linha = 0; linha < x; linha++){
        for(int coluna = 0; coluna < y; coluna++){
            printf("Linha %d Coluna %d: ",linha, coluna);
          scanf("%d",&matrizA[linha][coluna]);
        }
    }
    //imprimindo matriz Original
    printf("\nMatriz Original\n");
    for(int linha = 0; linha < x; linha++){
        for(int coluna = 0; coluna < y; coluna++){
            printf("%d ",matrizA[linha][coluna]);
        }
        printf("\n");
    }
    //Calculando Matriz transposta
    for(int linha = 0; linha < x; linha++){
        for(int coluna = 0; coluna < y; coluna++){
            matrizTransposta[coluna][linha] = matrizA[linha][coluna];
        }
    }
    printf("\nMatriz Transposta\n");
    //imprimindo a transposta
    for(int linha = 0; linha < y; linha++){
        for(int coluna = 0; coluna < x; coluna++){
            printf("%d ", matrizTransposta[linha][coluna]);
        }
        printf("\n");
    }
}
