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

int main(){
    circunferencia circulo;
    ponto2d pi;
    float distancia;


    printf("Informe o ponto central da circunferencia: \n");
    printf("x: ");
    scanf("%f", &(circulo.c.pontox));
    printf("y: ");
    scanf("%f", &(circulo.c.pontoy));
    printf("Informe o raio r: ");
    scanf("%f", &(circulo.r));

    do
    {

        printf("Informe o ponto pi: \n");
        printf("x: ");
        scanf("%f", &(pi.pontox));
        printf("y: ");
        scanf("%f", &(pi.pontoy));
        distancia = calculaDistancia(circulo.c.pontox, circulo.c.pontoy, pi.pontox, pi.pontoy);
        if (distancia == circulo.r)
        {
            printf("Na borda do circulo\n");
        }else if (distancia > circulo.r)
        {
            printf("Fora do circulo\n");

        }else{
            printf("Dentro do circulo\n");
        }


    }while(pi.pontox + pi.pontoy);


    return 0;
}
