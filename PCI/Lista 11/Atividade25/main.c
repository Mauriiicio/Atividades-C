#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, aux;
    printf("Digite um valor: ");
    scanf("%d",&x);
    printf("Digite um valor para ser expoente do primeiro valor: ");
    scanf("%d",&y);

    aux = pow(x,y);
    printf("O valor do primeiro elevado ao segundo e: %d", aux);



    /*
    25 - Construa um programa que solicite a entrada de dois n�meros inteiros e calcule e mostre a pot�ncia do primeiro
    n�mero pelo segundo (X elevado a Y).
    */
}
