#include <stdio.h>
int main(){
    int i,j,n, A[7][7], B[7][7], simetrica=1;

    do{
        printf ("Informe o numero de linhas e colunas da matriz ");
        scanf ("%d", &n);
    }while (n<1 || n>7);

    printf("*** Lendo a Matriz e construindo a transposta***\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++) {
            printf ("Matriz[%d][%d]: ", i, j);
            scanf ("%d", &A[i][j]);
            B[j][i]=A[i][j];
        }

    printf("*** Imprimindo a Matriz Original ***\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            printf ("%d  ", A[i][j]);
        printf ("\n");
    }
    printf("*** Imprimindo a Matriz Transposta ***\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            printf ("%d  ", B[i][j]);
        printf ("\n");
    }

}
