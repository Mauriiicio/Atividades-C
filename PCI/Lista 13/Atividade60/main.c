#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaracao variaveis
    int numLinhas = 25, num1 = 0, num2, num3, mdc, aux1, aux2, maior, menor = 0, medio;
    //entrada da repeticao, com a entrada dos valores.
    do{
        printf("Informe o primeiro numero: ");
        scanf("%d", &num1);
        printf("Informe o segundo numero: ");
        scanf("%d", &num2);
        printf("Informe o terceiro numero: ");
        scanf("%d", &num3);
        //salvando valores digitados
        maior  = num1;
        medio = num2;
        menor = num3;

        //fazendo a ordenacao dos numeros para tirar o MDC
        if(num1 > num2 &  num1 > num3){
            maior = num1;
            if(num2 > num3){
                medio = num2;
                menor = num3;
            }else{
                medio = num3;
                menor = num2;
            }
        }else{
            if(num2 > num1 & num2 > num3){
                maior = num2;
                if(num1 > num3){
                    medio = num1;
                    menor = num3;
                }else{
                    medio = num3;
                    menor = num1;
                }

            }else{
                if(num3 > num1 & num3 > num2){
                    maior = num3;
                    if(num1 > num2){
                        medio = num1;
                        menor = num2;
                    }else{
                        medio = num2;
                        menor = num1;
                    }
                }

            }


        }
        printf("Ordem dos numeros digitados: %d %d %d \n", menor, medio, maior);
        //calculando o maximo divisor comun entre o maior e o menor numero
        do{
            aux1 = maior / menor;
            aux2 = maior - aux1 * menor;
            maior = menor;
            menor = aux2;
        }while(menor != 0);
            mdc = maior;

        //ordenacao de outros valores
        if(medio > mdc){
            maior = medio;
            menor = mdc;
        }else{
            maior = mdc;
            menor = medio;
        }
        //calcular o MDC entro o maior e o menor em outra ordem
        do{
            aux1 = maior / menor;
            aux2 = maior - aux1 * menor;
            maior = menor;
            menor = aux2;

        }while(menor!= 0);

        mdc = maior;
        printf("O Maximo divisor Comum: %d\n", mdc);
        printf("----------------------------------------------------------------\n");
        numLinhas = numLinhas - 1;

    }while(numLinhas != 0);


}
