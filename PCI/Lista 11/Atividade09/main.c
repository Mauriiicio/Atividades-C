#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c, bask;
    printf("Digite os valore de a, b, c : ");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    bask =  (-b+(sqrt((b*b)-4*a*c)))/(2*a);
    printf("O resultado e %f", bask);



    /*9 - Fa�a um programa que calcule a f�rmula de Bhaskara (ax�+bx+c), pressupondo que seu delta sempre ser�
    positivo e sempre ter� uma raiz exata
    */
}
