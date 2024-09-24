#include <stdio.h>
int main(){
	int x, y, resto;
	printf ("Informe dois numeros inteiros para calcular o MDC: ");
   	scanf("%d %d",&x,&y);
	if (x!=0 && y!=0){
		resto = x%y;
 		while (resto!=0){
            printf ("x=%d, y=%d, resto=%d\n",x,y,resto);
			x =y;
			y =resto ;
			resto =x%y;
		}
		printf ("mdc = %d", y);
	}else
		printf ("Nao funciona para entradas nulas.");
}
