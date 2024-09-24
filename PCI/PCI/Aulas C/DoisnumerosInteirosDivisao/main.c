#include <stdio.h>
#include <stdlib.h>
int main(){
    int a,b,orig_a, orig_b,pro=0;
    printf ("Informe dois inteiros: ");
    scanf ("%d %d", &a,&b);
    orig_a=a;
    orig_b=b;
    while (a>=1) {
        if (a%2!=0)
            pro+=b; /* Acumulador*/
        a/=2; /* atualização de a*/
        b*=2;/* atualização de b*/
    }
    printf ("O produto de %d e %d e’ %d",orig_a,orig_b,pro);
}
