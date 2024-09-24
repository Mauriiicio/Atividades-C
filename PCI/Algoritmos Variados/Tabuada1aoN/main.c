#include <stdio.h>
int main(){
    int i ,j,n;
    printf ("Informe um numero inteiro: ");
	scanf("%d",&n);
	for (i=1;i <= n;i++){
        printf ("Tabuada do %d\n", i);
		for (j=1;j <= 10;j++)
			printf ( "%d x %d = %d\n", i,j, i*j ); //comando mais interno

    }
}
