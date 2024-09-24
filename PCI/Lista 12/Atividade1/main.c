#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dia1, mes1, ano1;
    int dia2, mes2, ano2;

    printf("Digite o primeiro dia: ");
    scanf("%d", &dia1);
    printf("Digite o primeiro mes: ");
    scanf("%d", &mes1);
    printf("Digite o primeiro ano: ");
    scanf("%d", &ano1);

    printf("\n");

    printf("Digite o segundo dia: ");
    scanf("%d", &dia2);
    printf("Digite o segundo mes: ");
    scanf("%d", &mes2);
    printf("Digite o segundo ano: ");
    scanf("%d", &ano2);

    if (ano1 > ano2 || ano1 == ano2 && (mes1 > mes2 || (mes1 == mes2 && dia1 > dia2))) {

        printf("Ordem cronologica \n");
        printf("%d/%d/%d\n", dia2, mes2, ano2);
        printf("%d/%d/%d", dia1, mes1, ano1);


    } else if (ano1 < ano2 || ano1 == ano2 && (mes1 < mes2 || (mes1 == mes2 && dia1 < dia2))) {
        printf("Ordem cronologica \n");
        printf("%d/%d/%d\n", dia1, mes1, ano1);
        printf("%d/%d/%d", dia2, mes2, ano2);


    } else {
        printf("As datas sao iguais: %d/%d/%d \n", dia1, mes1, ano1);
    }



}
