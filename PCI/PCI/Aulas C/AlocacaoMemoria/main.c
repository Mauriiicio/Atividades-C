#include <stdio.h>

int main(){
    int *p;
    printf ("Endereco de p: %d\n", &p);
    printf ("Valor de p: %d\n", p);
    p = (int*)malloc(4);
    printf ("Valor de p: %d\n", p);
    printf ("Valor do endereço apontado por p: %d\n", *p);
    *p = 5;
    printf ("Valor do endereço apontado por p: %d\n", *p);

}
