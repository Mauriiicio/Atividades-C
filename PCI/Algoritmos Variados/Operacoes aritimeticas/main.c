#include<stdio.h>
int main(){
    int a=20, b=10;
    float c=1.5,d;
    d=c*b/a; /*atribui 0.75 para d*/
    printf ("%f\n",d);
    d=c*(b/a); /*atribui 0.0 para d pois a divisão entre inteiros resulta em um inteiro*/
    printf ("%f",d);

    int x = 10;
		printf("%d\n", x++);
		printf("%d\n", x);

    int x = 10, y=6, z1=0;
    z1+=x;
    printf("%d\n", z1);
    z1*=y;
	printf("%d\n", z1);
	z1%=y;
	printf("%d\n", z1);


}
