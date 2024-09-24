#include <stdio.h>
#include <stdlib.h>

void procedimento(int *ponteiro)
{
    *ponteiro = 10;
}

int main()
{
    int lista[] = {1,2,3,4,5,6,7,8,9,10};
    int *ponteiro;
    int var, var2;

    printf("%d\n", var);

    procedimento(&var);

    printf("%d\n", var);
    ponteiro = &var;
    printf("ponteiro: %d \n", (lista));
    printf("ponteiro: %d \n", &var);


}
