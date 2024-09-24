#include <stdio.h>
typedef struct {
 float pontox;
 float pontoy;
} ponto2d;

typedef struct {
    ponto2d p1, p2; /* pontos extremos do segmento de reta */
}segmento;


int main(){
    segmento reta;
    float pmX, pmY;
    int n;

        printf("Digite o n numeros de segmentos de retas: " );
        scanf("%d", &n);
        while(n > 0){
        printf("Primeiro Seguimento: ");
        scanf("%f", &reta.p1.pontox);
        scanf("%f", &reta.p1.pontoy);

        printf("Segundo Seguimento: ");
        scanf("%f", &reta.p2.pontox);
        scanf("%f", &reta.p2.pontoy);

        pmX = (reta.p1.pontox + reta.p2.pontox) / 2;
        pmY = (reta.p1.pontoy + reta.p2.pontoy) / 2;
        printf("Ponto medio (%.2f, %.2f)\n", pmX, pmY);

        n--;
        }

}
