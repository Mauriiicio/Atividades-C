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
    int matrizA[x][y], matrizB[x][y + 1];

     printf("\nMatriz A\n");
    //colocando valores na matriz A
    for(int linha = 0; linha < x; linha++){
        for(int coluna = 0; coluna < y; coluna++){
            printf("Linha %d Coluna %d: ",linha, coluna);
          scanf("%d",&matrizA[linha][coluna]);
        }
    }

    //passando valor da matrizA para matrizB
    for(int linha = 0; linha < x; linha++){
        for(int coluna = 0; coluna < y; coluna++){
          matrizB[linha][coluna] = matrizA[linha][coluna];
        }
    }

    //calculando o produto da linha
    for(int linha = 0; linha < x; linha++){
		matrizB[linha][y] = 1;
        for(int coluna = 0; coluna < y; coluna++){
          matrizB[linha][y] *= matrizA[linha][coluna];
        }
    }

    printf("\nMatriz B\n");
    //imprimindo matriz B
    for(int linha = 0; linha < x; linha++){
        for(int coluna = 0; coluna < y + 1; coluna++){
          printf("%d  ",matrizB[linha][coluna]);
        }
        printf("\n");
    }
}
