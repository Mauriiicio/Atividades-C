#include <stdio.h>
#include <stdlib.h>

typedef struct {
int NumOnibus, numCidade,cidades[24], distanciaPercorrida;
}onibus;

int main()
{
    //matriz com as distancia das cidade;
    int distanciaCidades[5][5] =  {
                            {00, 14, 25, 13, 25},
                            {13, 00, 24, 27, 22},
                            {11, 44, 00, 41, 12},
                            {14, 65, 47, 00, 17},
                            {55, 44, 22, 35, 00}
                            };
   onibus frota[100];


    for(int i = 0; i < 10; i++){

        printf("Numero do Onibus: ");
        scanf("%d", &frota[i].NumOnibus);

        printf("Numero de cidades percorrida: ");
        scanf("%d", &frota[i].numCidade);

        frota[i].distanciaPercorrida = 0;

        for(int j = 0; j < frota[i].numCidade; j++)
        {
            printf("Digite o Cod das cidades: ");
            scanf("%d", &frota[i].cidades[j]);
        }

        for(int j = 0; j < frota[i].numCidade -1; j++)
        {
            frota[i].distanciaPercorrida += distanciaCidades[frota[i].cidades[j]][frota[i].cidades[j+1]];
        }
         printf("Distancia Percorrida: %d\n",frota[i].distanciaPercorrida);
   }


}
