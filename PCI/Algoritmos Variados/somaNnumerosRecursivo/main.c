#include <stdio.h>
#include <stdlib.h>
int x(int a)
{
    int y;
    if(a <= 0){
        return(0);
    }else{
        y =  a + x(a - 1);
        printf("Valor A: %d\n", a);
        printf("Valor de Y: %d\n", y);
        printf("\n");
        }
    return y;

}
int main()
{
    printf("%d\n", x(4));
}
