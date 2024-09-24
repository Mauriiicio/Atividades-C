#include <stdio.h>
#include <stdlib.h>
#include <Math.h>

int main()
{
     //Variaveis e suas inicializaçoes conforme enunciado
    float resultado = 0, termos = 0, denominador = 50, numerador = 1, expoente = 1;
    do{
        //repetindo o calculo do somatorio
        termos = pow(2, expoente)/denominador;
        resultado = resultado + termos;
        expoente = expoente + 1;
        denominador = denominador - 1;
    //repeti até qeu a variavel resultado fique menor que 99
    }while(expoente < 50);

    //escreve resultado
    printf("S: %.2f", resultado);

    return 0;
}
