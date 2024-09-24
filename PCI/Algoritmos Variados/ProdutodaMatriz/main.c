#include <stdio.h>
int main(){
    int i,j,k, n, A[7][7], B[7][7], C[7][7];

    do{
        printf ("Informe o numero de linhas e colunas da matriz ");
        scanf ("%d", &n);
    }while (n<1 || n>7);

    printf("*** Lendo a Matriz A ***\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++) {
            printf ("A[%d][%d]: ", i, j);
            scanf ("%d", &A[i][j]);
        }
    printf("*** Lendo a Matriz B ***\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++) {
            printf ("B[%d][%d]: ", i, j);
            scanf ("%d", &B[i][j]);
        }
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++){
            C[i][j] = 0;
            for (k = 0; k< 3; k++)
                C[i][j] = C[i][j]+A[i][k]* B[k][j];
        }

    printf("*** Imprimindo a Matriz A ***\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            printf ("%d  ", A[i][j]);
        printf ("\n");
    }
    printf("*** Imprimindo a Matriz B ***\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            printf ("%d  ", B[i][j]);
        printf ("\n");
    }
    printf("*** Imprimindo a Matriz Produto C ***\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            printf ("%d  ", C[i][j]);
        printf ("\n");
    }

}
