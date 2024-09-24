#include <stdio.h>
#include <stdlib.h>

int main()
{
    #include <stdio.h>
typedef struct /*Inicio da definição da estrutura */{
  char nome[8];
  int nmat; /* Número da matrícula */
  float nota[3]; /* Notas */
  float media; /* Média */
}Cadastro; /* Fim da definição */
int main(){
    Cadastro aluno[10];/* Declara uma variável do tipo Cadastro */
    int i,j;
    printf ("Informe os dados de 10 alunos\n");
    for (i=0; i<10; i++){
        printf ("Nome do aluno\n");
        scanf ("%s", aluno[i].nome);
        printf ("numero de matricula\n");
        scanf ("%d", &aluno[i].nmat);
        printf ("Informe as tres notas\n");
        for (j=0;j<3; j++)
            scanf ("%f",&aluno[i].nota[j]);

        aluno[i].media= (aluno[i].nota[0] + aluno[i].nota[1]+ aluno[i].nota[2])/3.0;
    }
    /* Imprimindo*/
    printf ("Imprimindo dados dos 10 alunos\n");
    for (i=0; i<10; i++){
        printf ("aluno %d\n", i+1);
        printf ("nome: %s\n",aluno[i].nome);
        printf ("numero de matricula: %d\n",aluno[i].nmat );
        printf ("Nota 1: %2.2f - Nota 2: %2.2f – Nota 3:%2.2f\n", aluno[i].nota[0], aluno[i].nota[1], aluno[i].nota[2]);
        printf ("media das notas: %2.2f\n",aluno[i].media);
    }

}

}
