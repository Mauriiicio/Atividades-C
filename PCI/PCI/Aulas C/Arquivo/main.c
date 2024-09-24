#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	FILE *ptr;
	char nomeArquivo[20],linha[102];
	int total=0;
	printf ("Informe o nome do arquivo a ser lido: ");
	scanf("%s", nomeArquivo);
	ptr = fopen(nomeArquivo, "rt");
	if (ptr==NULL) {
		printf("Arquivo não existe.");
		exit(1);
	}
	fgets(linha, 100, ptr);
	printf ("A string eh : %s\n", linha);
	total=strlen(linha);
	printf("O numero de caracteres lidos no arquivo %s eh %d", nomeArquivo, total);
 }
