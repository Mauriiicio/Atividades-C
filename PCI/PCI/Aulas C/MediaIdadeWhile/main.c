#include <stdio.h>

int main(){
    int i=1,n, idade;
    float media=0;
    printf("Digite o número n de alunos de SI : ");
    scanf("%d", &n);
    while (i<=n){
        printf ("Informe a idade:");
        scanf ("%d",&idade);
        media += idade; /*media=media+idade*/
        i++;
    }
    printf("Media = %2.1f\n", media/n);
}
