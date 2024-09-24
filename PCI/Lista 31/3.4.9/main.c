#include <stdio.h>
#include <stdlib.h>
int CalculoProduto(int x,int y)
{
    int p, i;
    p = 0;
    i = 0;
    while(x >= 1){
        if(x % 2 != 0)
            p = p + y;
        x = x / 2;
        y = y * 2;


        i++;
    }
    return p;
}

int main()
{
    int a, b, produto, i;
    i = 0;
    while(i <= 10){
    scanf("%d", &a);
    scanf("%d", &b);
    produto = CalculoProduto(a,b);
    printf("Produto: %d\n", produto);
    i = i + 1;
    if(i == 10)
        exit(1);
    }

}
