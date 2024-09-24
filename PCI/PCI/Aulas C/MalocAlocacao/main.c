#include <stdio.h>
#include <string.h>

void main(void) {
    char sir1[40];
    char *sir2;
    printf("Informe uma string: \n");
    scanf("%s", sir1);
    if ((sir2=(char *)malloc(strlen(sir1)+1))==NULL) {
        printf("Erro na alocação de memória !\n");
        exit(1);
    }
    strcpy(sir2, sir1);
    printf("A copia e: %s \n", sir2);

}

