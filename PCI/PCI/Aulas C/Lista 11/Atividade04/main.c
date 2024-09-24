#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1[3];
    int num2[3];

    printf("Digite um numero inteiro de 3 algarismos: \n");
    for(int i = 0; i < 3; i++){
    scanf("%d",&num1[i]);
    }
    num2[0] = num1[2];
    num2[1]= num1[1];
    num2[2] = num1[0];

    for(int j = 0; j < 3; j++){
        printf("\n%d", num2[j]);
    }



    /*
    4. Dado um número inteiro de 3 algarismos, inverter a ordem de seus algarismos. Os três algarismos do número
    dado são diferentes de zero.
    */
}
