#include <stdio.h>
#include <stdlib.h>

int main()
{
    float marco1, marco2, tempo, espaco;
    int velocidade = 0;

    printf("Digite o Marco 1: ");
    scanf("%f", &marco1);
    printf("Digite o Marco 2: ");
    scanf("%f", &marco2);
    espaco = marco2 - marco1;
    while(marco1 != marco2){
    printf("Digite a velocidade - 20, 30, 40, 50, 60, 70 e 80Km/h: ");
    scanf("%d", &velocidade);
    if(velocidade == 20){
        tempo = espaco / velocidade;
    }else if(velocidade == 30){
        tempo = espaco / velocidade;
    }else if(velocidade == 40){
        tempo = espaco / velocidade;
    }else if(velocidade == 50){
        tempo = espaco / velocidade;
    }else if(velocidade == 60){
        tempo = espaco / velocidade;
    }else if(velocidade == 70){
        tempo = espaco / velocidade;
    }else if(velocidade == 80){
        tempo = espaco / velocidade;
    }
    printf("Tempo entre o Marco 1 e Marco 2: %.2f Horas\n", tempo);
    printf("Digite o Marco 1: ");
    scanf("%f", &marco1);
    printf("Digite o Marco 2: ");
    scanf("%f", &marco2);
    }





}
