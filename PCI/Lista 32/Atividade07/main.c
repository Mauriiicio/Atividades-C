#include <stdio.h>
#include <string.h>
int comparaString(char s[], char t[]) {
    int i = 0, tamanhos = 0, tamanhot = 0;
    while(s[tamanhos] != '\0'){
        tamanhos++;
    }
    while(t[tamanhot] != '\0'){
        tamanhot++;
    }
    if(tamanhos < tamanhot){
        printf("A string s e menor que t\n");
    }else if(tamanhos == tamanhot){
        printf("A string s e do mesmo tamanho que t\n");
    }else
        printf("A string s e maior que t\n");

}
int main ()
{
	char s[100],t[100];
	scanf("%s", s);
	scanf("%s", t);
	comparaString(s,t);
	return(0);
}
