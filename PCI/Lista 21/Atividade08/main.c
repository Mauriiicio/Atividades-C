#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaração das variaveis
    int func1 = 1, func2 = 2, func3 = 3, i = 0, numEmpre[300], numMeses[300];
    //saida e entrada de dados
    printf("Digite o numero do empregado: ");
    scanf("%d", &numEmpre[0]);
    printf("Digite os meses trabalhados: ");
    scanf("%d", &numMeses[0]);
    printf("--------------------------------------------------------\n ");
    //repeticao para os 300 valores, qual chegar primeiro;
    while(numEmpre[i]!= 0 || numMeses[i] != 0){
            //percorre os vetores e verifica de os numero sao 0 e 0;
         for(int j = 0; j < 0; j++){
            if(numEmpre[j] == 0 && numMeses[j] == 0)
            break;
         }

        //mesmo logico do maior e menor numero;
        if(numMeses[i] < numMeses[func1]){
            func3 = func2;
            func2 = func1;
            func1 = i;
        }else if(numMeses[i] < numMeses[func2]){
            func3 = func2;
            func2 = i;
        }else if(numMeses[i]< numMeses[func3])
            func3 = i;
            //adiciona mais 1 na varivel de controle;
            i = i + 1;
            //volta a pegar os valore enquanto os numeros nao forem 0,0
        printf("Digite o numero do empregado: ");
        scanf("%d", &numEmpre[i]);
        printf("Digite os meses trabalhados: ");
        scanf("%d", &numMeses[i]);
        printf("--------------------------------------------------------\n ");
    }
        //imprimi os resultados.
        printf("O empregado mais recente: %d\n",numEmpre[func3]);
        printf("O segundo empregado mais recente: %d\n",numEmpre[func1]);
        printf("O terceiro empregado mais recente: %d\n",numEmpre[func2]);

}
