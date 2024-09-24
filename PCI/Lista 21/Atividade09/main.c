#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaracao das variaveis
    float x, vetorA[30], vetorB[30];
    //preenchendo o vetor A
    printf("Digite os valores do vetor A: ");
    for(int y = 0; y < 30; y++){
        scanf("%f", &vetorA[y]);
    }
    //preenchendo o vetor B
    printf("Digite os valores do vetor B: ");
    for(int j = 0; j < 30; j++){
        scanf("%f", &vetorB[j]);
    }
    //Atribuindo valor em X
    printf("Digite o valor de X: ");
    scanf("%f", &x);

    //percorre o vetor A e verifica se tem algum valor igual a x
    for(int i = 0; i < 30; i++){
        //se tiver um valor igual a x, imprime o valor igual
        if(vetorA[i] == x){
            printf("O elemento de A que e igual a X e: %.1f\n", vetorA[i]);
            printf("O valor de B de posicao igual a de A que e o elemento: %.1f", vetorB[i]);
            i = 30;
        //caso nao tenha
        }else if(i == 30){
        printf("O numero %.1f nao existe no vetor A", x);
        i = 30;
        }


    }

}
