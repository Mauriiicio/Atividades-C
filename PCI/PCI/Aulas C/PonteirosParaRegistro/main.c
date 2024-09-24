#include <stdio.h>
/*void lePonto3D(ponto3d *f);: lê dados de uma ponto no espaço tridimensional com coordenadas (x,y,z) passada como ponteiro. (Por quê como ponteiro?)
void imprimePonto3D(ponto3d f); Imprime coordenadas de um ponto.
O programa principal que requeira a leitura de 5 pontos no espaço tridimensional
*/
typedef struct {
   float x;
   float y;
   float z;
} ponto3d;

void lePonto3D(ponto3d *);
void imprimePonto3D(ponto3d );
float ProdutoEscalar(ponto3d,ponto3d);

int main(){
    int i;
//    O programa principal que requeira a leitura de 5 pontos no espaço tridimensional
    ponto3d p[5];
    for (i=0;i<5; i++){
        lePonto3D(&p[i]);
        imprimePonto3D(p[i]);
    }
    for (i=0; i<4 ; i++)
       printf ("\nProduto escalar entre p[%d] e p[%d] = %f", i, i+1, ProdutoEscalar(p[i],p[i+1]));
}
void lePonto3D(ponto3d *f){
   printf ("\nInforme as coordenadas (x,y,z) do ponto: ");
   scanf ("%f %f %f", &((*f).x), &(f->y), &(f->z));
}
void imprimePonto3D(ponto3d f){
  printf ("%f %f %f", f.x, f.y, f.z);
}
float ProdutoEscalar(ponto3d f1,ponto3d f2){
     float pe;
     pe=f1.x*f2.x + f1.y*f2.y + f1.z*f2.z;
     return (pe);
}

