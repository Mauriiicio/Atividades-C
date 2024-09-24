#include <stdio.h>
#include <stdlib.h>

int main()
{
    float tamLado, area, perimetro;
    printf("Digite o tamanho do lado do quadrado: ");
    scanf("%f", &tamLado);
    area = tamLado * tamLado;
    perimetro = tamLado * 4;
    printf("Area do quadrado: %f\n", area);
    printf("Perimeto do quadrado: %f ", perimetro);

    /*
    18 - Elabore um programa que leia o tamanho do lado de um quadrado e informe a área e o perímetro do quadrado.
    (Perímetro = 4 * L; área = L ^ 2).
    */
}
