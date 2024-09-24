#include <stdio.h>
#include <stdlib.h>
int resto(n, m)
{
    if(n < m)
        return n;
    else
        return resto(n-m, m);

}
int main()
{
    int x , y;
    scanf("%d", &x);
    scanf("%d", &y);
    printf("%d", resto(x,y));
}

