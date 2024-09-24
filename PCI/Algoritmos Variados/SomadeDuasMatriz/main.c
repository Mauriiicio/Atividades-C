#include <stdio.h>
int main(){
    int i, j, m, n, mat1[10][10], mat2[10][10], mat3[10][10];

    do {
        printf ("Informe o numero de linhas da matriz ");
        scanf ("%d", &m);
    }while (m<1 || m>10);
    do{
        printf ("Informe o numero de colunas da matriz ");
        scanf ("%d", &n);
    }while (n<1 || n>10);

    printf("*** Lendo Matriz 1 ***\n");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++) {
            printf ("Matriz1[%d][%d]: ", i, j);
            scanf ("%d", &mat1[i][j]);
        }
    printf("*** Lendo Matriz 2 ***\n");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++) {
            printf ("Matriz2[%d][%d]: ", i, j);
            scanf ("%d", &mat2[i][j]);
        }

    printf("*** Somando os valores correspondentes das duas matrizes ***\n");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            mat3[i][j] = mat1[i][j] + mat2[i][j];

    printf("*** Matriz 1 ***\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++)
            printf ("%d  ", mat1[i][j]);
        printf ("\n");
    }
    printf("*** Matriz 2 ***\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++)
            printf ("%d  ", mat2[i][j]);
        printf ("\n");
    }
    printf("*** Matriz 3 - Soma ***\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++)
            printf ("%d  ", mat3[i][j]);
        printf ("\n");
    }

}
