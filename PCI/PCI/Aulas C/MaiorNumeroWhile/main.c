#include <stdio.h>

int main(){
    int i=1, n, num, max; /* m�ximo parcial*/
    printf("Digite o n�mero n de elementos : ");
    scanf("%d", &n);
    max = 0;
    while (i<=n){
        printf ("Informe o numero:");
        scanf ("%d",&num);
        printf ("O maximo parcial era: %d \n",max);
        if (num > max) /* para procurar o m�ximo */
            max = num;
        printf ("O maximo parcial agora eh: %d \n",max);
        i++;
    }
    printf("M�ximo = %d\n", max);
}
