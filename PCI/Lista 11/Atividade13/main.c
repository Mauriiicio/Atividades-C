#include <stdio.h>
#include <stdlib.h>

int main()
{
   float x,y,a,b,c,d,e,f;
    printf("Entre com os valore de a: ");
    scanf("%f", &a);
    printf("Entre com os valore de b: ");
    scanf("%f", &b);
    printf("Entre com os valore de c: ");
    scanf("%f", &c);
    printf("Entre com os valore de d: ");
    scanf("%f", &d);
    printf("Entre com os valore de e: ");
    scanf("%f", &e);
    printf("Entre com os valore de f: ");
    scanf("%f", &f);
    x = (c * e - b * f) / (a * e - b * d);
    y = (a * f - c * d) / (a * e - b * d);
    printf("Valor de X:  %f \n",x);
    printf("Valor de Y: %f ", y);
}

