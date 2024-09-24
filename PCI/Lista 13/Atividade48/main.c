#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaracao das variaveis
    float volume, raio = 0;

    //repeticao
    while(raio <= 20){
        //calculando o volume
        volume = 4 * 3.141592 * pow(raio,3)/3;
        //imprimindo o valor de raio e volume
        printf("Raio: %.2f\t",raio);
        printf("Volume: %.2f\n",volume);
        //variando o raio de 0
        raio = raio + 0.5;

    }
}
