#include <stdio.h>
#include <stdlib.h>

int main()
{
   int ano1,ano2;
	printf("Digite o seu ano de nascimento:");
	scanf("%d",&ano1);
	printf("Digite o ano atual:");
	scanf("%d",&ano2);
	printf("Voce tem ou tera neste ano %d anos \n",ano2-ano1);
}

