#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaracao das variaveis
    int num = 300, cont,divisorNum;
    float quociente,LimiteDivisorN;
    //repeticao e atribuicao dos valores dos divisores
    do{
        LimiteDivisorN = sqrt(num); //limite superioe de num
        cont = 0;//ainda nao achou divisores
        divisorNum = 1; // inicia o numero de divisores

        do{
            quociente = num/divisorNum;
            //verificacao do divisor para ver se é exato
            if(quociente * divisorNum == num){
                    //caso o divisor for exato, atualiza o contador d numeros de divisores.
                cont = cont + 1;
            }
            //atualiza o numero do divisor para o proximo divisor
            divisorNum = divisorNum + 1;
        }while(divisorNum < LimiteDivisorN);

        printf("Numero: %d  Quantidade de divisores: %d\n",num, cont);
        //atualiza o controlador da repeticao;
        num = num + 1;
    }while(num < 400);
}
