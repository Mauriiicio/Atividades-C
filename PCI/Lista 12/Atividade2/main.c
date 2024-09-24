#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, y, z;
    printf("Insira os valor do lado do triangulo: \n \n");
    printf("Insira o valor X: ");
    scanf("%f",&x);
    printf("Insira o valor Y: ");
    scanf("%f",&y);
    printf("Insira o valor Z: ");
    scanf("%f",&z);

    //verifica se existe um tringulo e verifica qual é;
    if(x < (y + z) & y < (x + z) & z < (x + y)){
      if(x == y & x == z)
        printf("Triangulo equilatero");
        else
            if(x == y || x == z || y == z)
                 printf("Triangulo isosceles");
            else
                printf("Triangulo escaleno");

    }
}

