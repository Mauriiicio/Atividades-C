#include <stdio.h>

typedef struct {
    char nome[10];
    int rgm;
}cad_aluno;

int main(){
    cad_aluno *v;
    int i;
    v = malloc (3 * sizeof (cad_aluno));
    for (i = 0; i < 3; i++){
         printf ("v[%d].nome=",i);
         scanf ("%s", v[i].nome);
         printf ("v[%d].rgm=",i);
         scanf ("%d", &(v[i].rgm));
    }
    printf ("Realocando memoria\n");
    v = realloc (v, 6 * sizeof (cad_aluno));
    for (i = 3; i < 6; i++){
         printf ("v[%d].nome=",i);
         scanf ("%s", v[i].nome);
         printf ("v[%d].rgm=",i);
         scanf ("%d", &(v[i].rgm));    }
}
