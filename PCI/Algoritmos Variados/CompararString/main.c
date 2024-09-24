#include<stdio.h>
int main(){
    char st1[20], st2[20];
	int i=0;
	printf("Informe duas strings: ");
	scanf("%s %s",st1,st2);
	while(st1[i]==st2[i] && st1[i]!= '\0' && st2[i]!= '\0')
		i++;
	if (st1[i]== '\0' && st2[i]== '\0')
		printf ("As strings sao iguais");
	else
		 printf ("As strings nao sao iguais");

}
