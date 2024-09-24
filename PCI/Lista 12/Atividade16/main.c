#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, d, aux;
    printf("Digite o primeiro numero para fazer o primeiro intervalo: ");
    scanf("%d,", &a);
    printf("Digite o segundo numero do primeiro intervalo: ");
    scanf("%d,", &b);
    printf("Primeiro Intervalo: %d a %d\n\n", a, b);


    printf("Digite o primeiro numero do segundo intervalo: ");
    scanf("%d,", &c);
    printf("Digite o segundo numero do segundo intervalo: ");
    scanf("%d,", &d);
    printf("Segundo Intervalo: %d a %d\n\n", c, d);

    printf("Digite um numero desejado: ");
    scanf("%d,", &aux);
    if(aux >= a && aux <= b && aux >= c && aux <= d)
       printf("Pertence aos dois intervalos");
    else if(aux >= a && aux <= b)
        printf("Pertence ao primeiro intervalo");
    else if(aux >= c && aux <= d)
        printf("Pertence ao segundo intervalo");
    else
        printf("Esta fora dos dois intervalos");
}
