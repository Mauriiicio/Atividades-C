//Faça um programa que leia um ponto do plano cartesiano e escreva em qual quadrante ele se encontra.
#include <stdio.h>
typedef struct{
    float x;
    float y;
}Ponto2d;
int main(){
    Ponto2d p[10];
    int i, n;
    do {
        printf ("Informe uma quantidade de pontos para serem classificados: ");
        scanf ("%d", &n);
    }while (n<1 || n>10 );

    for (i=0; i<n; i++){
        printf ("Informe a coordenadas x e y do ponto : ");
        scanf ("%f %f", &(p[i].x), &(p[i].y));
        if (p[i].x>0.0){
            if (p[i].y>0.0)
                printf ("O ponto p esta no I quadrante\n");
            else if (p[i].y<0.0)
                printf (" O ponto p esta no IV quadrante\n");
        } else if (p[i].x<0.0){
            if (p[i].y>0.0)
                printf ("O ponto p esta no II quadrante\n");
            else if (p[i].y<0.0)
                printf (" O ponto p esta no III quadrante\n");
        }
    }
}


