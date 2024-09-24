#include <stdio.h>
#include <stdlib.h>
typedef struct {
 float pontox;
 float pontoy;
} ponto2d;

typedef struct {
    ponto2d p1, p2; /* pontos extremos do segmento de reta */
    float pmX, pmY;
}segmento;


int main(){
    segmento *reta;
    segmento *raiz;
    int count = 1;
        reta = malloc(sizeof(segmento));
        raiz = reta;

        printf("Primeiro Seguimento: ");
        scanf("%f", &(reta->p1.pontox));
        scanf("%f", &(reta->p1.pontoy));

        printf("Segundo Seguimento: ");
        scanf("%f", &(reta->p2.pontox));
        scanf("%f", &(reta->p2.pontoy));

        while(reta->p1.pontox != 0 || reta->p1.pontoy != 0 || reta->p2.pontox != 0 || reta->p2.pontoy){
                reta->pmX = (reta->p1.pontox + reta->p2.pontox) / 2;
                reta->pmY = (reta->p1.pontoy + reta->p2.pontoy) / 2;
                printf("Ponto medio (%.2f, %.2f)\n", reta->pmX, reta->pmY);

                count++;
                raiz = (segmento *)realloc(raiz,count * sizeof(segmento));
                reta = raiz + (count - 1);

                printf("Primeiro Seguimento: ");
                scanf("%f", &reta->p1.pontox);
                scanf("%f", &reta->p1.pontoy);

                printf("Segundo Seguimento: ");
                scanf("%f", &reta->p2.pontox);
                scanf("%f", &reta->p2.pontoy);

        }
        reta = raiz;
        for(int i = 0; i < count - 1; i++){
            printf("Ponto medio (%.2f, %.2f)\n", reta->pmX, reta->pmY);
            reta++;


        }

}
