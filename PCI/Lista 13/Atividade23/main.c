#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaracao das variaveis
    int dia1, mes1, ano1, dia2, mes2, ano2, qtd_dias = 0, aux, ano_bissexto = 0;
    printf("Informe a primeira data: \n");
    scanf("%d", &dia1);
    scanf("%d", &mes1);
    scanf("%d", &ano1);
    printf("Informe a segunda data: \n");
    scanf("%d", &dia2);
    scanf("%d", &mes2);
    scanf("%d", &ano2);
    //auxiliar recebe o ano1 para depois ir adicinando mais 1 até ano2
    aux = ano1;
    do{
        ano_bissexto = aux % 4;
        //se for par é ano bissexto e conta 366
        if(ano_bissexto == 0){
            qtd_dias = qtd_dias + 366;
        //senao conta 365
        }else{
            qtd_dias = qtd_dias + 365;
        }
        aux = aux + 1;
    //controle da repeticao;
    }while(aux != ano2);
    printf("A diferenca dos dias e: %d \n", qtd_dias);

    return 0;
}
