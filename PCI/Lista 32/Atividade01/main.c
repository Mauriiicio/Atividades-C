#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p, x=5;//declara��o de um ponteiro p e uma variavel inteira x recebendo o valor 5.
    *p *= 2**p;//*p indica um ponteiro, *= indica multiplica��o, 2**p indica 2 multiplicado pelo ponteiro.
    printf("%d\n", x); //imprime o valor de x, atribuido na primeiro linha, o valor de x � 5.

}
