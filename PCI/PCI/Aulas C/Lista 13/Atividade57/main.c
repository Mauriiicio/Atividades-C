#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaracao das variaveis
    int Nota = 10,contador = 1, numAluno, dia, mes;
    float notaProvisoria, notaFinal = 0, mediaProvisoria, mediaFinal, somaProvisoria = 0,
    somaFinal = 0,desvioPadrao, desvioFinal,somaQuaFinal, somaQuaProvisorio;
    //repetidor while
    while(contador <= 10){
        //recebendo valores;
        printf("\nDigite o numero do aluno: ");
        scanf("%d", &numAluno);
        printf("Digite a nota provisoria: ");
        scanf("%f", &notaProvisoria);
        printf("Digite o dia da entrega: ");
        scanf("%d", &dia);
        printf("Digite o mes da entrega: ");
        scanf("%d", &mes);

        //calculando a nota final
        if(mes == 4){
            if(dia <= 20)
                notaFinal = notaProvisoria + 10;
            else{
                notaFinal = notaProvisoria;
             }
        }

                if(mes == 5){
                    if(dia <=2){
                        notaFinal = notaProvisoria;
                    }else{
                        notaFinal = notaProvisoria / 2;
                        }

        }

        //resultado de cada aluno
        printf("A nota do aluno: %d\t", numAluno);
        printf("eh: %.2f\n", notaFinal);
        printf("\-------------------------------------------------------------------------------------/");
        //somando as notas finais e provisorias
        somaProvisoria = somaProvisoria + notaProvisoria;
        somaFinal = somaFinal + notaFinal;

        //somanda as notas do quadrado das provisoria e finais
        somaQuaProvisorio = somaQuaProvisorio + pow(notaProvisoria,2);
        somaQuaFinal = somaQuaFinal + pow(notaFinal,2);

        //atualizando o contador
        contador = contador + 1;

    }
        //calculando a media
        mediaProvisoria = somaProvisoria / Nota;
        mediaFinal = somaFinal / Nota;

        //calculo dos desvios padrao
        desvioPadrao = (somaQuaProvisorio - (pow(somaProvisoria,2))/Nota) / (Nota - 1);
        desvioPadrao = sqrt(desvioPadrao);

        desvioFinal = (somaQuaFinal - (pow(somaFinal,2))/Nota) / (Nota - 1);
        desvioFinal = sqrt(desvioPadrao);

        //resultados
        printf("Media notas provisoria: %.2f\n", mediaProvisoria);
        printf("Media notas Finais: %.2f\n", mediaFinal);
        printf("Desvio Padrao Provisorio: %.2f\n", desvioPadrao);
        printf("Desvio Padrao Final: %.2f\n", desvioFinal);



}
