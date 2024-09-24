#include <stdio.h>

int main(){
    int *v, n = 5, i;
    v = calloc(n,sizeof (int));
    if(v == NULL){
        printf("Espaço Insuficiente para alocar \n");
        exit(1);
    }else{
        for(i = 0; i < n; i++)
            printf("\n vet[%d]=%d ",i, v[i]);
    }

}
