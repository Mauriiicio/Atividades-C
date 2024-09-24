#include <stdio.h>
#include <stdlib.h>

int main()
{
    float celsius, fahrenheit;
    printf("Digite a temperatudo em Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (9 * celsius + 160) / 5;
    printf("A tempertura em Fahrenheit: %f", fahrenheit);




    /*
    14 - Ler uma temperatura em graus Celsius e apresenta-la convertida em graus Fahrenheit. A fórmula de conversão é:
    F=(9*C+160) / 5, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.
    */
}
