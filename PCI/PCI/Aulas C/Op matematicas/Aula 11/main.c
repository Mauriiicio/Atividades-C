#include <stdio.h>
#include <math.h>  /* biblioteca padrão para funções matemáticas básicas*/
# define PI  3.1415926536 /* atribui o valor para PI*/
int main() {
    float a=1.0,b;
    printf("O valor 4.3 arredondado usando round() e %f\n", round(4.3));
    b=exp(a);
    printf("a=%f, b=%f\n",a,b);
    a=2.0;
    a=pow(a,3.0);
    printf("a=%f\n",a);
    a=cos(PI/2);
    printf("a=%f\n",a);
}
