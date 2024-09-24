#include <stdio.h>
#include <math.h> /* biblioteca padrão para funções matemáticas básicas*/
# define PI  3.1415926536 /* atribui o valor para PI*/
int main() {
    float a=1.0,b=4.8;
    printf("O valor %f arredondado usando round() e %f\n", b,round(b));
    b=exp(a);
    printf("Exponencial de a=%f eh b=%f\n",a,b);
    a=2.0;
    b=pow(a,3.0);
    printf("Cubo de a=%f eh igual a %f\n",a,b);
    a=PI/2;
    b=cos(a);
    printf("Coseno de %f eh igual a %f\n",a,b);
    a=16;
    b=sqrt(a);
    printf("Raiz quadrada de %f eh igual a %f\n",a,b);



}

 #include <stdio.h>
int main(){
	int a, b, c;
	printf("Digite tres valores inteiros: ");
	scanf("%d %d %d", &a, &b, &c);
	printf("%d\t%d\t%d\t%d\t%d", a>b, b>c, c>a, a!=b, a==c);
}a
