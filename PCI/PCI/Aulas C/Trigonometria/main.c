/*Ex.Calcular e escrever a área total de um tetraedro, dadas as coordenadas de cada um de seus quatro vértices.
Para tanto, deverão ser utilizados os seguintes módulos:
Que calcula a distância entre dois pontos do espaço;
Que calcula a área de um triângulo em função de seus lados*/
#include <stdio.h>
#include <math.h>

typedef struct{
  float x,y,z;
}Ponto3d;

float distancia (Ponto3d, Ponto3d );
float area_triang( float, float, float);

int main(){
    Ponto3d V[4];
    int i;
    float area, area_total=0.0;

    for (i=0;i<4;i++){
        printf ("Informe as coordenadas do vertice %d ", i);
        scanf ("%f %f %f", &V[i].x, &V[i].y, &V[i].z);
    }
    // Calculando a area do triangulo V[0]V[1]V[2]
    area= area_triang(distancia(V[0],V[1]), distancia(V[1],V[2]), distancia(V[2],V[0]));
    area_total=area_total+area;

    printf ("A area do primeiro triangulo eh %3.2f ", area);


    // Calculando a area do triangulo V[0]V[1]V[3]
    area= area_triang(distancia(V[0],V[1]), distancia(V[1],V[3]), distancia(V[3],V[0]));
    area_total=area_total+area;

    printf ("A area do segundo triangulo eh %3.2f ", area);

    // Calculando a area do triangulo V[1]V[2]V[3]
    area= area_triang(distancia(V[1],V[2]), distancia(V[2],V[3]), distancia(V[3],V[1]));
    area_total=area_total+area;

    printf ("A area do terceiro triangulo eh %3.2f ", area);

    // Calculando a area do triangulo V[0]V[2]V[3]
    area= area_triang(distancia(V[0],V[2]), distancia(V[2],V[3]), distancia(V[3],V[0]));
    area_total=area_total+area;

    printf ("A area do quarto triangulo eh %3.2f ", area);

    printf ("A area total do tetraedro eh %3.2f ", area_total);
}
float distancia (Ponto3d p1, Ponto3d p2){
    float dist;
    dist= sqrt((p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y)+(p1.z-p2.z)*(p1.z-p2.z));
    return(dist);
}
float area_triang( float a, float b, float c){
    float semi_perim, area;
    semi_perim=(a+b+c)/2;
    area= sqrt(semi_perim*(semi_perim-a)*(semi_perim-b)*(semi_perim-c));
    return (area);
}
