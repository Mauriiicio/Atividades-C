#include <stdio.h>
#include <stdlib.h>
#include <Math.h>
int main()
{
    //declarando as variaveis
    float x1, y1, x2, y2, distancia;
    int controle = 1;

    //repeticao
    while (controle != 0){
    printf("Digite o Valor da coordenada X1: ");
    scanf("%f", &x1);
    printf("Digite o Valor da coordenada X2: ");
    scanf("%f", &x2);
    printf("Digite o Valor da coordenada Y1: ");
    scanf("%f", &y1);
    printf("Digite o Valor da coordenada Y2: ");
    scanf("%f", &y2);

    //controle para encerrar o programa
    if(x1 == 0 & x2 == 0 & y1 ==0 & y2 == 0)
        controle = 0;
    //calculando a distancia
    distancia = sqrt(pow(pow(x2-x1,2),2) + pow(pow(y2-y1,2),2));

     printf("Distancia entre os dois ponto: %.2f\n", distancia);


    }



}
