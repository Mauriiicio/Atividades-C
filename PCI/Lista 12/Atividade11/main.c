#include <stdio.h>
#include <stdlib.h>

int main()
{
    char operador;
    int num1, num2, resultado;
    printf("Digite um operador Aritmetico: ");
    scanf("%c", &operador);
    printf("Digite um numero: ");
    scanf("%d", &num1);
    printf("Digite outro numero: ");
    scanf("%d", &num2);
    switch(operador){
    case '+':
      resultado =  num1 + num2;
      printf("Resultado: %d", resultado);
      break;
    case '-':
      resultado =  num1 - num2;
      printf("Resultado: %d", resultado);
      break;
    case '*':
      resultado =  num1 * num2;
      printf("Resultado: %d", resultado);
      break;
    default :
        printf("Valor invalido");
    }
}
