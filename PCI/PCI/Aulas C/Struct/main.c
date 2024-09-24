#include <stdio.h>
#include <stdlib.h>
//Faça um programa que leia um ponto do plano cartesiano e escreva em qual quadrante ele se encontra.
typedef struct{

    float x;
    float y;


}ponto2d;
int main()
{
    ponto2d p;
    int n;

    printf("Informe a quantidade de pontos para serem classificados: ");
    scanf("%d", &n);
    for(int i; i < n; i++){
        printf("Informe as coordenadas x e y do ponto: ");
        scanf("%f %f", &(p.x),&(p.y));
        if(p.x > 0){
            if(p.y > 0)
                printf("O ponto p esta no I quadrante\n");
            else if(p.y < 0)
                printf("O ponto p esta no IV quadrante\n");

        }else if(p.x < 0){
            if(p.y > 0)
                printf("O ponto p esta no II quadrante\n");
            else if(p.y < 0)
                printf("O ponto p esta no III quadrante\n");
        }
    }




    return 0;
}
