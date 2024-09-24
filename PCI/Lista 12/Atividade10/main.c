#include <stdio.h>
#include <stdlib.h>

int main()
{
    char vogal;
    printf("Digite uma letra: ");
    scanf("%c", &vogal);
    if(vogal == 'a' || vogal == 'e' || vogal == 'i' || vogal == 'o' || vogal == 'u')
        printf("Esta letra e uma vogal");
    else
        printf("Esta letra nao e uma vogal");
}
