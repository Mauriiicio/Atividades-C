#include <stdio.h>
    int fatorial(int x){
    int fat=1, i;
    for (i=x; i > 1; i--)
        fat = fat * i;
    return(fat);
    }


    /* funcao principal */
    int main(){
    int n,p,C;
    scanf("%d %d",&n,&p);
    if (p > 0&&n > 0&&p <= n){ /* chamada da funcao */
        C = fatorial(n)/(fatorial(p)*fatorial(n-p));
        printf("%d \n",C);
    }


}
