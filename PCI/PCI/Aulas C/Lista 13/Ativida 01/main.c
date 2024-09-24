#include <stdio.h>
#include <stdlib.h>

int main()
{

    int idade, soma, count;
    float media;

    soma = 0;
    count = 0;
    scanf("%d",&idade);

    while (idade > 0){
        soma += idade;
        count++;
    scanf("%d",&idade);
    }
    media = (float)soma / (float)count;

    printf("IDADE MEDIA = %.2f\n",media);




}
    /*
    Fazer um algoritmo que:
     Leia um número indeterminado de linhas contendo cada uma a idade de um indivíduo.
     A última linha que não entrará nos cálculos, contém o valor da idade igual a zero.
     Calcule e escreva a idade média deste grupo de indivíduos.
     Escreva também a maior idade e a menor
    */
