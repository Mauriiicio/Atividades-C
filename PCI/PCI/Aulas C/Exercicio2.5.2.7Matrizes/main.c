#include<stdio.h>
int main(){
    int A[20][10], i, j, B[20][11],m,n;
    do {
        printf("Informe o numero de linhas de A: ");
        scanf("%d", &m);
    }while (m<1 || m>20);
    do {
        printf ("Informe o numero de colunas de A: ");
        scanf("%d", &n);
    }while (n<1 ||  n>10);
    for (i=0; i<m; i++){
        B[i][n]=1;
        for(j=0; j<n; j++){
            printf(" Informe A[%d][%d] =", i, j);
            scanf("%d", &A[i][j]);
            B[i][j]=A[i][j];
            B[i][n]*=B[i][j];
        }
    }
    printf ("Matriz A");
    for (i=0; i<m; i++){
        printf ("\n");
        for(j=0; j<n; j++){
            printf(" %d",A[i][j]);
        }
    }
    printf ("\n Matriz B");
    for (i=0; i<m; i++){
        printf ("\n");
        for(j=0; j<=n; j++){
            printf(" %d", B[i][j]);
        }
    }
}
