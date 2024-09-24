#include <stdio.h>
#include <stdlib.h>


int tamanhoString(char string[]){
    int tamanho = 0;

    while(string[tamanho] != '\0'){
        tamanho++;
    }
    return tamanho;
}

int main() {

    char vet[100];
    scanf("%s", &vet);
    printf("Tamanho do string: %d\n", tamanhoString(vet));

    return 0;
}
