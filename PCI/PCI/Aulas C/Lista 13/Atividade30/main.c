#include <stdio.h>
#include <stdlib.h>

int main()
{
    float SenA = 0, A = 0;

    while(A <= 6.3){

        SenA = A - (pow(A,3)/6) + (pow(A,5)/120) - (pow(A,7)/5040);
        printf("Angulo: %d\n", A);
        printf("Seno: %d\n", SenA);
        A = A + 0.1;
    }
}
