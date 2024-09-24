#include<stdio.h>
#include<stdlib.h>

int TAMANHO = 40;
int mes = 30;

//Verifica quantas vezes o numero repetiu no dia
void verificar(int *numeros, int *resultado){
    int i, j, contador;
    int vetor[7];

    for(i = 0; i < TAMANHO; i++){
        vetor[i] =  numeros[i];
    }

    for(i = 0; i < 6; i++){
        contador = 0;
        for(j = 0; j < TAMANHO; j++){
            if(numeros[j] == i + 1){
                contador++;
            }
        }
        resultado[i] = contador;
    }
}
//Verifica qual repetiu mais no mes
int verificarMatriz(int matriz[mes][TAMANHO]){
    int cont, resposta[2];
    resposta[0] = 0;
    resposta[1] = 0;
    for(int k = 1; k < 7; k++){
            cont = 0;
        for(int j = 0; j < mes; j++){
            for(int i = 0; i < TAMANHO; i++){
                if(matriz[j][i] == k){
                    cont++;
                }
            }
        }
        if(cont > resposta[1]){
            resposta[0] = k;
            resposta[1] = cont;
        }
    }

    return(resposta[0]);
}

int main(){
    int i, contador = 1, maior;
    int Matriz[mes][TAMANHO];
    int vetorResultado[7];
    //Le os numeros do dia
    for(int j = 0; j < mes; j++){
        printf("*****Dia %d*****\n\n", j + 1);
        printf("Informe os numeros...\n\n");
        for(i = 0; i < TAMANHO; i++){
            printf("Numero %d: ", contador++);
            scanf("%d", &Matriz[j][i]);
        }
        //chamada da funcao de verificar o numero do dia
        verificar(Matriz[j], vetorResultado);

        for(i = 0; i < 6; i++){
            if(vetorResultado[i] > 0)
                printf("Numero %d: %d vezes.\n", i + 1, vetorResultado[i]);
        }

    }
    //verifica o mais repetido do mes.
    maior = verificarMatriz(Matriz);
    printf("Numero do mes: %d", maior);
    return 0;
}
