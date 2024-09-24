#include <stdio.h>
#include <stdlib.h>

int main()
{
    int anos ;
	float paisA, paisB;

	paisA = 90000000;
	paisB = 200000000;
	anos = 0;

	while(paisA < paisB){

		paisA += ((paisA * 3.0) / 100.0);
        paisB += ((paisB * 1.5) / 100.0);
		anos++;
	}
        printf("Anos Nescessarios para o Pais A ultrapassar ou igualar B = %d\n",anos);

}
