#include <stdio.h>
#include <math.h>
typedef struct {
 float pontox;
 float pontoy;
} ponto2d;

typedef struct {
    ponto2d c;
    float r;
}circunferencia;

float calculaDistancia(float x1, float y1, float x2, float y2)
{
    float distancia;
    distancia = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));

    return distancia;
}
typedef struct {
    float pontox;
    float pontoy;
    float distancia;

}pontoPi;


int main(){
    circunferencia circulo;
    pontoPi *pi;
    pontoPi *raiz;
    float distancia;
    int count = 1;
    printf("Informe o ponto central da circunferencia: \n");
    printf("x: ");
    scanf("%f", &(circulo.c.pontox));
    printf("y: ");
    scanf("%f", &(circulo.c.pontoy));
    printf("Informe o raio r: ");
    scanf("%f", &(circulo.r));
    raiz = malloc(sizeof(pontoPi));
    pi = raiz;
    do
    {
        printf("Informe o ponto pi: \n");
        printf("x: ");
        scanf("%f", &(pi->pontox));
        printf("y: ");
        scanf("%f", &(pi->pontoy));
        if(!(pi->pontox + pi->pontoy)){
            break;
        }

        distancia = calculaDistancia(circulo.c.pontox, circulo.c.pontoy, pi->pontox, pi->pontoy);
        pi->distancia = distancia;
        if (distancia == circulo.r)
        {
            printf("Na borda do circulo\n");
        }else if (distancia > circulo.r)
        {
            printf("Fora do circulo\n");

        }else{
            printf("Dentro do circulo\n");
        }
        count++;
        raiz = (pontoPi *)realloc(raiz, count * sizeof(pontoPi));
        pi = raiz + (count - 1);
    }while(1);

    int i;
    pi = raiz;
    for(i = 0; i < count - 1; i++){
        printf("Distancia ponto %d: %.2f\n", i, pi->distancia);
        pi++;
    }
    return(0);
}
