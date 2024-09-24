#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numMatricula, frequencia, alunosReprovados, reprovadosFrequencia = 0;
    float nota1, nota2, nota3,aux = 0, maiorNota = 0, menorNota = -1, mediaTurma, auxPorc, porcReprovadoFreque = 0, notaFinal = 0;
    char codigo;

    for(int i = 1; i <= 4; i++){ //depois mudar o 4 para 100;
        printf("Digite o numero da matricula: ");
        scanf("%d", &numMatricula);
        printf("Digite a nota 1: ");
        scanf("%f", &nota1);
        printf("Digite a nota 2: ");
        scanf("%f", &nota2);
        printf("Digite a nota 3: ");
        scanf("%f", &nota3);
        printf("Digite o numero de aulas frequentadas: ");
        scanf("%d", &frequencia);
        notaFinal = (nota1 + nota2 + nota3) / 3;
        printf("Nota final: %.2f\n", notaFinal);
        mediaTurma = mediaTurma + notaFinal;

        if(notaFinal < 6 || frequencia < 40){
            alunosReprovados = alunosReprovados + 1;
            printf("Aluno Reprovado\n");
        }else{
            printf("Aluno Aprovado\n");

        }

        if(frequencia < 40)
            reprovadosFrequencia = reprovadosFrequencia + 1;

        if(menorNota == - 1 || menorNota > notaFinal)
            menorNota = notaFinal;

        if(notaFinal > maiorNota)
            maiorNota = notaFinal;
        }
        porcReprovadoFreque = ((float)reprovadosFrequencia * 100) / alunosReprovados;
        mediaTurma = mediaTurma / 3;


        printf("Media da turma: %.2f\n", mediaTurma);
        printf("Maior nota: %.2f\n", maiorNota);
        printf("Menor nota: %.2f\n", menorNota);
        printf("Quantidade de alunos reprovados: %d\n", alunosReprovados);
        printf("Porcentagem de alunos reprovados por Frequencia: %.2f%%", porcReprovadoFreque);


}
