#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    //ax² + bx + c;
    //delta = b² * a * c;
    // x1 e x2 = -b +- raiz(delta) / 2 * a;
    float a, b, c, delta, raiz1, raiz2;
    printf("Digite o valor de a:\n ");
    scanf("%f", &a);
    printf("Digite o valor de b:\n ");
    scanf("%f", &b);
    printf("Digite o valor de c:\n ");
    scanf("%f", &c);
    if(a != 0){
        delta = (b*b)- 4 * a * c;
        if(delta == 0){
            raiz1 = (-b + sqrt(delta))/(2*a);
            printf("Delta e igual a 0 \n");
            printf("As raizes sao iguais a: %f: ", raiz1);
        }else
            if(delta > 0){
                raiz1 = (-b + sqrt(delta))/(2*a);
                raiz1 = (-b - sqrt(delta))/(2*a);
                printf("Delta e maior que 0 \n");
                printf("A primeira Raiz: %f:\n ", raiz1);
                printf("A segunda Raiz: %f:", raiz2);
            }else{
                printf("Nao existe raiz real");
            }
    }else{
            printf("Nao e equacao do segundo grau");
            }
}
