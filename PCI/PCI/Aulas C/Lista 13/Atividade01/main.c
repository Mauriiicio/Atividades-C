#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade, qtdIdade, controle, maior, menor;
    float media;

    qtdIdade = 0;
    controle = 0;
    scanf("%d",&idade);
    menor = idade;

    while (idade > 0){
        qtdIdade += idade;
        controle++;
        if(menor > idade)
            menor = idade;
        if(maior < idade)
            maior = idade;
        scanf("%d",&idade);
    }


    media = (float)qtdIdade / (float)controle;
    printf("IDADE MEDIA = %.2f\n",media);
    printf("IDADE MENOR = %d\n",menor);
    printf("IDADE MAIOR = %d\n",maior);



}
    /*
    Fazer um algoritmo que:
     Leia um n�mero indeterminado de linhas contendo cada uma a idade de um indiv�duo.
     A �ltima linha que n�o entrar� nos c�lculos, cont�m o valor da idade igual a zero.
     Calcule e escreva a idade m�dia deste grupo de indiv�duos.
     Escreva tamb�m a maior idade e a menor
    */
