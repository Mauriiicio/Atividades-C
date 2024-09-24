#include <stdio.h>
#include <stdlib.h>

int main()
{
   //declaração das variaveis
   float X, soma = 0, potencia, Sinal = 1;
   int denominador = 1,expoente = 25;
   printf("Digite o valor de X: ");
   scanf("%f", &X);
   //repeticao a conta.
   do{
        //faz o calculo da potencia e da divisao
        potencia = pow(X, expoente);
        potencia = potencia / denominador;
        //verifica se o sinal da conta se é adicao ou subtracao;
        if(Sinal > 0){
            soma = soma + potencia;
            Sinal = -1;
        }else{
        soma = soma - potencia;
        Sinal = 1;
        }
        //adinciona mais 1 no denominador
        denominador = denominador + 1;
        //subtrai 1 do expoente
        expoente = expoente - 1;
    //controle ate o denominador chegar a 25
   }while(denominador <= 25);

    printf("O valor de X: %.2f", soma);

}
