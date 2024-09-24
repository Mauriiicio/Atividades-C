#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, num_al_turma, num_mat, cont_aus, num_turmas_5=0;
    float porc_aus;
    char id_turma, freq;

    for (i=1;i<=4;i++){
        printf ("Informe a letra de identificacao da turma %d ", i);
        scanf (" %c", &id_turma);
        printf ("Informe a numero de alunos matriculados na turma %d ", i);
        scanf ("%d", &num_al_turma);
        cont_aus=0;
        for (j=1;j<=num_al_turma; j++){
            printf ("Informe a numero de matricula do aluno %d ", j);
            scanf ("%d", &num_mat);
            printf ("Informe a frequencia do aluno %d : <P/A> ", j);
            scanf (" %c", &freq);
            if (freq=='A')
                cont_aus++;
        }
        porc_aus=((float) cont_aus/num_al_turma)*100;
        printf ("A porcentagem de ausencia da turma %c eh %2.2f\n", id_turma, porc_aus);
        if (porc_aus>5)
          num_turmas_5++;
    }
    printf ("O numero de turmas que tiveram porcentagem de ausencia maior que 5 eh= %d", num_turmas_5);
}

