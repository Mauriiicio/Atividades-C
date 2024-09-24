#include <stdio.h>
#include <stdlib.h>
void teste(int *px, int *py) {
     px = py; //px recebe o endereço de py

    *py = (*py) * (*px); //*py recebe a multiplicacao do valor do *py mulplicado pelo valor de *px
    *px = *px + 2; //*px recebe o valor de *px, o que ele indica + 2.
     printf("Endereco px: %d\n", px);
     printf("Endereco py: %d\n", px);
     printf("valor apontado px: %d\n", *px);
     printf("valor apontado py: %d\n", *px);
}

int main(void) {
    int x, y; //declaração das variaveis
    scanf("%d",&x);//leitura de x
    printf("Endereco x %d\n", &x);
    scanf("%d",&y);//leitura de y
    teste(&x,&y);//chamanda procedimento, passando x e y;
    printf("x = %d, y = %d", x, y);//escreve o reultado.
}


