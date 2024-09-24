#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Variaveis e suas inicializaçoes conforme enunciado
    float resultado = 0, termos = 0, denominador = 1, numerador = 37;
    do{
        //repetindo o calculo do somatorio
        termos = (numerador *(numerador + 1))/denominador;
        resultado = resultado + termos;
        numerador = numerador - 1;
        denominador = denominador + 1;

    //repeti até qeu a variavel resultado fique menor que 99
    }while(numerador > 1);

    //escreve resultado
    printf("S: %.2f", resultado);

    return 0;
}
