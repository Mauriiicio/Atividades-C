#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,j, m[3][4], maior=0, estado, municipio;
    float media=0.0;

    //Lendo uma matriz n x n do teclado:
    //Leitura/

    for (i = 0; i < 3; i++){
        for (j = 0; j < 4; j++) {
            printf ("Populacao do municipio %d do estado %d: ", j, i);
            scanf ("%d", &m[i][j]);
            if (m[i][j]>maior){
                maior=m[i][j];
                estado=i;
                municipio=j;
            }
        }
        media=media+m[i][0];
    }

    //Escrita/
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++)
            printf ("%d ", m[i][j]);
        printf ("\n");
    }

    printf ("O municipio mais populoso eh %d e pertence ao estado %d\n ", municipio, estado);
    printf ("A media da populacao das capitais eh : %3.2f ", media/3);
}
