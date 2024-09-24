#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Ano;
    printf("Digite o ano: ");
    scanf("%d", &Ano);
    if ((Ano % 4 != 0) || ((Ano % 100 == 0) && (Ano % 400 != 0)))
    printf("bissexto \n");
    else
    printf("Nao e bissexto ");
}
