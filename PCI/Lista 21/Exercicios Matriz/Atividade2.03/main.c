#include <stdio.h>
#include <stdlib.h>

int main()
{
    float soma, b[100][200];
    //usa somanete um for pois a linha esta determinada no enunciado, assim passamos somente coluna por coluna;
   for(int coluna = 0; coluna < 200; coluna++){
        soma = soma + b[30][coluna];
    }

}
