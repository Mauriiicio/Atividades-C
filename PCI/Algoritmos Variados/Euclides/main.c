#include <stdio.h>
#include <stdlib.h>


int euclidesR(int m, int n){
    if(n == 0){
        return m;
    }
        return euclidesR(n, m % n);
    }

int main()
{
    int m, n;
    scanf("%d", &m);
    scanf("%d", &n);

    printf("%d", euclidesR(m,n));
    return 0;
}
