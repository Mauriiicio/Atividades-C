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
     Leia um n�mero indeterminado de linhas contendo cada uma a idade de um indiv�duo.
     A �ltima linha que n�o entrar� nos c�lculos, cont�m o valor da idade igual a zero.
     Calcule e escreva a idade m�dia deste grupo de indiv�duos.
     Escreva tamb�m a maior idade e a menor
    */
