#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaracao das variaveis
    float raiz, x1, x2;
    int controle;
    //entrada do valor da raiz
    printf("Digite um valor positivo para Raiz: ");
    scanf("%f", &raiz);
    //verifica se o numero é positivo
    if(raiz > 0){
        //incializando as variaveis.
        x1 = raiz / 2;
        controle = 0;

        //repeticao aate 20 vezes.
        do{
            x2 = (pow(x1,2) + raiz)/(2*x1);
            x1 = x2;

            //incrementa o controle
            controle++;

        }while(controle != 20);
        printf("Raiz do numero digitado nas condicoes do enunciado: %.2f\n", x2);

    }else
        printf("Erro: Numero Negativo");


}
