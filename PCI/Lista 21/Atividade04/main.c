#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaracao das variaveis
    float soma = 0, vetorB[100];
    //repeticao para colocar os valores no vetor, mudar o 10 para 100
    for(int i = 0; i < 10; i++){
        printf("Digite o %d numero: ", i + 1);
        scanf("%f", &vetorB[i]);
    }
    //repeticao para fazer a conta - Soma = (bi-b100) e vai decremando
    for(int i = 0; i < 50; i++){
        soma = soma + (vetorB[i] - vetorB[101-i]) * (vetorB[i] - vetorB[101-i]) * (vetorB[i] - vetorB[101-i]);
    }
    //imprimi o valor de soma.
    printf("Soma dos valores no vetor: %.2f", soma);
}
