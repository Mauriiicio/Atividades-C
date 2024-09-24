#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n;
    float valorP, expoente, vetorX[10], coef[20];
    printf("Digite o valor de N: ");
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        printf("Digite o coeficiente a%d: ", i);
        scanf("%f", &coef[i]);
    }
    for(int i = 0; i < 10; i++){
        printf("Digite o %d valor de x: ", i+1);
        scanf("%f", &vetorX[i]);
    }
    for(int c = 0; c < 10; c++){
        valorP = coef[0];
        for(int i = 1; i < n; i++){
            expoente = 1;
            for(int j = 1; j < i; j++)
                expoente = expoente * vetorX[c];
            valorP = valorP + coef[i] * expoente;
        }
        printf("Soma de P de x %d igual a: %.2f \n", c+1, valorP);
    }

}
