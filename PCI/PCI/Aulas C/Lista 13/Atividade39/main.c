#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaracao das variaveis.
    int X, fatorial, ControleRpeticao = 0, expoente = 0, aux = 0, sinal = -1;
    float soma = 0, aux1, num = 1, denominador = 1;

    //recebe valor de X
    printf("Digite o valor de X: ");
    scanf("%d",&X);

    while(ControleRpeticao<=20){
        aux1 = num/denominador; //calculo do termo
        sinal = -1 * sinal; //inversao do sinal;
        soma = soma + sinal * aux1; //calculo do valor de S

        expoente = expoente + 2; //atualiza o proximo expoente
        num = pow(X,expoente);//atualiza o proximo numerador

        denominador = 1;
        aux = aux + 2; //faz a atualizacao do fatorial
        fatorial = aux;
        //faz essa repeticao para o denominador.
        do{
            denominador = denominador * fatorial;//atualiza o denominador;
            fatorial = fatorial - 1;
        }while(fatorial==1);

        //conta os termos calculados e serve de controle de repeticao;
        ControleRpeticao = ControleRpeticao + 1;

    }

    printf("S: %.2f", soma);




    return 0;
}
