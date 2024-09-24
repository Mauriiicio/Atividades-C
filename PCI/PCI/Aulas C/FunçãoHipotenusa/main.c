#include <stdio.h>
#include <math.h>

float hipotenusa(float cat1, float cat2){
    float hip;
    hip =sqrt(cat1*cat1+cat2*cat2);
	return(hip);
}
int main(){
    float a,b,c,L,D;
	printf ("Informe os lados a,b e c do paralelepipedo: ");
    scanf ("%f %f %f",&a,&b,&c);
    L=hipotenusa(a,b);
	D=hipotenusa(L,c);
	printf ("O valor da diagonal eh: %.2f",D);
}
