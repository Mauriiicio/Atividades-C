#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float distanciaVetores(float *x, float *y, int n){
    float raiz;
    for(int i = 0; i < n; i++){
        raiz += pow(y[i] - x[i], 2);
    }
    raiz = sqrt(raiz);
    return(raiz);
}

int main()
{
    float x[30], y[30], result;
    int m;
    scanf("%d", &m);
    for(int i = 0; i < m; i++){
        scanf("%f", &x[i]);
        scanf("%f", &y[i]);
    }

    result = distanciaVetores(x,y,m);
    printf("%f", result);
}


