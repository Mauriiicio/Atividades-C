#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaracao das variaveis;
   char frase[80];
   int qtdBranco, qtdA = 0;
   //imprimindo e recebendo a leitura dos caracteres;
   printf("Digite sua frase de 80 characteres: ");
   scanf(" %[^\n]", frase);
   printf("Valor de A %d", qtdA);
   //percorrendo para verificar os espacos
   for(int i = 0; i < 80; i++){
        if(frase[i] == ' '){
            qtdBranco = qtdBranco + 1;
        }
        //percorrendo para verificar os A
        if(frase[i] == 'A' || frase[i] =='a')
            qtdA = qtdA + 1;

   }
    printf("Numeros de espacos em branco: %d\n", qtdBranco);
    printf("Numeros de A: %d", qtdA);
}







