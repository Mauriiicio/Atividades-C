#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaracao das variaveis
    int i,j,tamanhoVetorA, tamanhoVetorB, vetorA[100], vetorB[100], vetorC[200], aux;
    //Colcando o tamanho do vetor A que seja menor que 100 e preenchendo ele.
    printf("Digite o tamanho do vetor A: ");
    scanf("%d", &tamanhoVetorA);
    printf("Digite o vetor A: \n");
    for(i = 0; i < tamanhoVetorA; i++){
        scanf("%d", &vetorA[i]);
    }
    //Colcando o tamanho do vetor B que seja menor que 100 e preenchendo ele.
    printf("Digite o tamanho do vetor B: ");
    scanf("%d", &tamanhoVetorB);
    printf("Digite o vetor B: \n");
    for(int i = 0; i < tamanhoVetorB; i++){
        scanf("%d", &vetorB[i]);
    }

    //colocando os valores do vetor A em C
    for (i = 0; i<tamanhoVetorA; i++)
		vetorC[i] = vetorA[i];

	//colocando os valores do vetor B em C
	for (j = 0; j<tamanhoVetorB; j++, i++)
        vetorC[i] = vetorB[j];


    //ordenando os valores no vetor C
    for(int x = 0; x < tamanhoVetorA + tamanhoVetorB; x++){
            for(int j = x; j< tamanhoVetorA + tamanhoVetorB; j++){
                if(vetorC[x] > vetorC[j]){
                    aux = vetorC[x];
                    vetorC[x] = vetorC[j];
                    vetorC[j] = aux;
                }
            }

    }


	for (i = 0; i<tamanhoVetorA + tamanhoVetorB; i++)
	{
		printf("C[%d]:%d\n", i, vetorC[i]);
	}
}
