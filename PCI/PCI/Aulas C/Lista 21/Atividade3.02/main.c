#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct // Cria uma STRUCT para armazenar os dados
{
    //declaração das variaveis
    char nome[90];
    float salario;
    int idade;
    bool sexo;

} registro; // Define o nome do novo tipo criado


int main()
{
    registro x;
    x.salario = 7840212.00;

    return 0;
}
