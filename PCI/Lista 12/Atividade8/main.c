#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Ano;
    printf("Digite o ano: ");
    scanf("%d", &Ano);
    if (Ano % 4 == 0)
    printf("Bissexto");
    else
    printf("Nao e bissexto \n");
}
