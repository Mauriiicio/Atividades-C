#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaracao das variaveis
    float funcao,Fx,Gx, Hx, areaTriangulo;
    int control;

    for(int i = 1; i < 11; i++){
        Hx = pow(i, 2) - 16; //calculando funcao h(x)
        //verifica se é maior ou igual a o
        if(Hx >= 0)
            Fx = Hx;
        else
            Fx = 1;
        //verifica se é igual a 0
        if(Fx == 0)
            Gx = pow(i,2) + 16;
        else
            Gx = 0;

        //calculo da funcao
        funcao = Fx + Gx;
    printf("X em: %d\t ", i);
    printf("Y vale: %.1f\n", funcao);

    }

}
