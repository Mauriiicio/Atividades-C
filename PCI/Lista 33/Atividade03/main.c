#include <stdio.h>
#include <stdlib.h>
#define MAXPOLY 50
typedef struct {
 float pontox;
 float pontoy;
} ponto2d;

typedef struct {
    int n; /* numero de pontos do poligono */
    ponto2d p[MAXPOLY]; /* array de pontos no polygono */
} poligono;

double Calcarea(poligono *p)
{
    double total = 0.0; // área calculada gradativamente
    int i, j; // contadores /
    for (i=0; i < p->n; i++)
    {
        j = (i+1) % p->n; // os índices são considerados mod n para garantir que haja um segmento entre o primeiro e o último ponto
        total += ((p->p[i]).pontox * (p->p[j]).pontoy - ( (p->p[j]).pontox * (p->p[i]).pontoy));
    }
    return(total / 2.0);
}
int main()
{
    double area;
    poligono poligunu;
    printf("Digite quantidade de pontos do poligono: ");
    scanf("%d", &(poligunu.n));

    while(poligunu.n && (poligunu.n ) >= 3){
        for(int i = 0; i < poligunu.n; i++){

            scanf("%f", &((poligunu.p[i]).pontox));
            scanf("%f", &((poligunu.p[i]).pontoy));

            //&polignu.p[i]->pontox
        }
      area = Calcarea(&poligunu);
      printf("Area %.2f\n", area);
      printf("Digite quantidade de pontos do poligono: ");
      scanf("%d", &(poligunu.n));
    }

    return 0;
}
