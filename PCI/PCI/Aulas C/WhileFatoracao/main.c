#include <stdio.h>

int main(){
    int i,n, prod = 1;
    printf("Digite o número n : ");
    scanf("%d", &n);
    i=n;
    while (i>0){
        printf ("Produto Parcial na iteracao %d = %d x %d = %d\n", i, prod, i, prod*i );
        prod = prod*i;
        i--;
    }
    printf("Fatorial = %d\n", prod);
}
