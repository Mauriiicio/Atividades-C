#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i, j, tamanhoVetorA, tamanhoVetorB, vetorA[30], vetorB[20], vetorC[50];

    //Colcando o tamanho do vetor A que seja menor ou igual a 30 e preenchendo ele.
    printf("Digite o tamanho do vetor A: ");
    scanf("%d", &tamanhoVetorA);
    printf("Digite o vetor A: \n");
    for(int i = 0; i < tamanhoVetorA; i++){
        scanf("%d", &vetorA[i]);
    }
    //Colcando o tamanho do vetor B que seja menor ou igual a 20 e preenchendo ele.
    printf("Digite o tamanho do vetor B: ");
    scanf("%d", &tamanhoVetorB);
    printf("Digite o vetor B: \n");
    for(int i = 0; i < tamanhoVetorB; i++){
        scanf("%d", &vetorB[i]);
    }
        //colocando os valores do vetor A em C
        for ( i = 0; i<tamanhoVetorA; i++)
            vetorC[i] = vetorA[i];

        //colocando os valores do vetor B em C
        for ( j = 0; j<tamanhoVetorB; j++, i++)
            vetorC[i] = vetorB[j];

    printf("Vetor C:\n");

    for (int i = 0; i<tamanhoVetorA + tamanhoVetorB; i++)
	{
		printf("C[%d]:%d\n", i, vetorC[i]);
	}

}
