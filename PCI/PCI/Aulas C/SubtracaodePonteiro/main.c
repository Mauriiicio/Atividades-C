#include<stdio.h>
/* strlen: retorna o comprimento da string s */
int strlen(char *st){
char *p=st;
while (*p != '\0')
	p++;
return p - st;
}
int main(){
    char s[15];
    int n, comp;
    printf ("Informe uma string: ");
    scanf ("%s", s);
    comp=strlen(s);
    printf ("O comprimento da string %s eh %d \n", s,comp);
}
