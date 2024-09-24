#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Mes, Ano, NumDias;
    printf("Digite o mes: ");

    scanf("%d", &Mes);
    if ((Mes == 4 ) || (Mes == 6) || (Mes == 9) || (Mes == 11))
        NumDias = 30;
    else
        if (Mes == 2){
            NumDias = 28;
        }
    else
    NumDias = 31;
    printf("Este mes tem %d dias ", NumDias);
}
