#include <stdio.h>
#include <math.h>


int main()
{
    float catetoOposto, catetoAdjacente, Hipotenusa;
    printf("Digite os Catetos de um triangulo: ");
    scanf("%f", &catetoOposto);
    scanf("%f", &catetoAdjacente);
    Hipotenusa = pow(catetoAdjacente,2) + pow(catetoOposto,2);
    sqrt(Hipotenusa);

    printf("%f",Hipotenusa);
}
