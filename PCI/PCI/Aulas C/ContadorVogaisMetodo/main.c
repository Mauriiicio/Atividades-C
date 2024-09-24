#include <stdio.h>
int contaVogais (char *);
int main(){
    int i, n;
    char str[20];
    printf ("Informe o numero de strings que serao lidas\n");
    scanf ("%d", &n);
    for (i=0;i<n;i++){
        printf ("Informe a string numero %d\n", i+1);
        scanf ("%s", str);
        printf ("A string %s tem %d vogais\n", str, contaVogais(str));
    }
}

int contaVogais (char s[]) {
	  int numVogais=0, i,j;
	  char vogais[]= "aeiouAEIOU";
	  for (i = 0; s[i] != '\0'; ++i) {
		for (j = 0; vogais[j] != '\0'; ++j) {
			if (vogais[j] == s[i]) {
				numVogais ++;
                     break;
              }
		}
   }
return numVogais;
}
