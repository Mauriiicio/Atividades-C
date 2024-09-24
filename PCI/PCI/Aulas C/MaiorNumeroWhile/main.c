#include <stdio.h>

int main(){
    int i=1, n, num, max; /* máximo parcial*/
    printf("Digite o número n de elementos : ");
    scanf("%d", &n);
    max = 0;
    while (i<=n){
        printf ("Informe o numero:");
        scanf ("%d",&num);
        printf ("O maximo parcial era: %d \n",max);
        if (num > max) /* para procurar o máximo */
            max = num;
        printf ("O maximo parcial agora eh: %d \n",max);
        i++;
    }
    printf("Máximo = %d\n", max);
}
