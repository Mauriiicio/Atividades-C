#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Variaveis e suas inicializaçoes conforme enunciado
    float resultado = 0, termos = 0, denominador = 1, numerador = 1;
    do{
        //repetindo o calculo do somatorio
        termos = numerador / denominador;
        resultado = resultado + termos;
        numerador = numerador + 2;
        denominador = denominador + 1;
         printf("S: %.2f\n", resultado);
    //repeti até qeu a variavel resultado fique menor que 99
    }while(resultado < 99);

    //escreve resultado
    printf("S: %.2f", resultado);

    return 0;
}
