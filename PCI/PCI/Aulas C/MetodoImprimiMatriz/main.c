#include <stdio.h>
void LeMatriz (int mat[5][5], int);
void ImprimeMatriz (int mat[5][5], int );
void TrocaMatrizes (int mat1[5][5], int mat2[5][5], int );
int main(){
	int matriz1[5][5], matriz2[5][5];

	printf(" ------ Lendo Matriz 1 --------\n");
	LeMatriz(matriz1,5);

	printf(" ------ Lendo Matriz 2 --------\n");

	LeMatriz(matriz2,5);

	printf ("Imprimindo as matrizes antes da troca ...\n");
	ImprimeMatriz (matriz1,5);
	ImprimeMatriz (matriz2,5);
	TrocaMatrizes(matriz1,matriz2,5);
    printf ("Imprimindo as matrizes depois da troca ...\n");
	ImprimeMatriz (matriz1,5);
	ImprimeMatriz (matriz2,5);
}
void LeMatriz(int mat[5][5], int tam){
    int i,j;
    for(i = 0; i < tam; i++){
        for (j=0; j< tam; j++){
           //printf("Digite numero:");
           //scanf("%d",&mat[i][j]);
           mat[i][j]=rand()%10;
        }
    }
}
void ImprimeMatriz (int mat[5][5], int tam){
    int i,j;
    for(i = 0; i < tam; i++){
        for(j = 0; j < tam; j++)
            printf("%d  ",mat[i][j]);
        printf ("\n");
    }
    printf ("\n");
}
void TrocaMatrizes (int mat1[5][5], int mat2[5][5], int tam){
    int i, j, aux;
    for(i = 0; i < tam; i++){
        for(j = 0; j < tam; j++){
            aux=mat1[i][j];
            mat1[i][j]=mat2[i][j];
            mat2[i][j]=aux;
        }
    }
}
