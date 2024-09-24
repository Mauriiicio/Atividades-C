#include<stdio.h>
int main(){
    char st[13], stInv[13];
    int tam, i, j;
	printf("Entre com o string: ");
	scanf("%s",st);
	tam = 0;
	printf ("Tam=%d\n",tam);
	while(st[tam] != '\0' && tam < 13){
		tam++;
		printf ("Tam=%d\n",tam);
	}

    stInv[tam] = '\0';
    j = tam-1;
    i = 0;
    while(i<tam){
        stInv[j] = st[i];
        printf ("stInv=%s\t i=%d\t j=%d \n", stInv,i,j);
        i++;
        j--;

    }
    printf("A inversa e: %s\n",stInv);
}
