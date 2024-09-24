#include <stdio.h>
#include <stdlib.h>
int main() {
	FILE *ptr; char nomeArquivo[20], caracter;
	printf ("Informe o nome do arquivo a ser lido: ");
	scanf("%s", nomeArquivo);
	ptr = fopen(nomeArquivo, "rt");
	if (ptr==NULL) {
		printf("Arquivo não existe.");
		exit(1); }
	caracter=getc(ptr);
 	while (caracter!=EOF){
		printf("%c", caracter);
 		caracter=getc(ptr); }
}
