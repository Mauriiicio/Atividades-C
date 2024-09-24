#include <stdio.h>

int main(){
    int m, n, i,j, **mat;
    printf("Informe numero de linhas: \n");
    scanf("%d", &m);
    if ((mat=(int *)malloc(m * sizeof(int)))==NULL) {
        printf("Erro de alocação de memoria !\n");
        exit(1);
    }
    printf("Informe numero de colunas: \n");
    scanf("%d", &n);
    for (i=0; i<m; i++)
        if ((mat[i]=(int *)malloc(n * sizeof(int)))==NULL) {
            printf("Erro de alocação de memoria !\n");
            exit(1);
        }
    printf ("Lendo matriz\n");
    printf ("Lendo matriz\n");
    for (i=0; i<m; i++){
        for (j=0; j<n; j++)
            scanf("%d", &mat[i][j]);

    }
    for (i=0; i<m; i++){
       for (j=0; j<n; j++){
         printf("%d ", mat[i][j]);
       }
       printf ("\n");
    }
    free(mat);
}

