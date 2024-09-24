#include <stdio.h>
#include <stdlib.h>

int main()
{
    int CodigoCurso = 0, numVagas = 0, candMasculino = 0, candFeminino = 0, Soma = 0, maiorCurso = 0;
	float porceFeminina = 0, candidatoPorVaga = 0, MaiorCandidatoVaga = 0, totalCandidato = 0;

    do{
        printf("Digite o codigo do curso:\n ");
        scanf("%d",&CodigoCurso);
        printf("Digite o numero de vagas:\n ");
        scanf("%d",&numVagas);
        printf("Digite numero de candidatos masculino:\n ");
        scanf("%d",&candMasculino);
        printf("Digite numero de candidatos feminino:\n ");
        scanf("%d",&candFeminino);

        Soma = candMasculino + candFeminino;
		candidatoPorVaga = (float) Soma / numVagas ;
		porceFeminina = (float)(100 * candFeminino) / Soma;

			if (candidatoPorVaga > MaiorCandidatoVaga){

				 MaiorCandidatoVaga = candidatoPorVaga;

				 maiorCurso = CodigoCurso;

			 }

				else {
					MaiorCandidatoVaga = MaiorCandidatoVaga;

				}

		printf("Candidato por vaga: %.2f\n",candidatoPorVaga);
		printf("Porcentagem feminina: %.2f%%\n",porceFeminina);

		totalCandidato += Soma;


     }

        while( CodigoCurso != 0);
		printf("Maior numero de candidos  por vaga: %.2f do curso com codigo: %d\n",MaiorCandidatoVaga,maiorCurso);
		printf("Total de canditos: %.2f\n",totalCandidato);

		return 0;
}
