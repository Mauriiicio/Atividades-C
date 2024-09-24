#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //Variaveis e suas inicializaçoes conforme enunciado
    float resultado = 0, termos = 0, denominador = 1, numerador = 1, sinal = 1; //Sinal começa com 1/

    do{
        //repetindo o calculo do somatorio
        termos = numerador/denominador;

        if(sinal == 1)
            resultado = resultado + termos;
        else
            resultado = resultado - termos;

		printf("S: %.2f\t", resultado);

        numerador = numerador + 1;
        denominador = pow(numerador,2);


		sinal = sinal * -1; //mutiplicando por -1 fica alterando o sinal/


    //repeti até qeu a variavel resultado fique menor ou igual a 10
    }while(numerador <= 10);

    //escreve resultado
    printf("\nResultado: %.2f", resultado);

    return 0;
}
