#include <stdio.h>
#include <string.h>
void invertString (char copia[], char original[]){
    int i = 0;
    while(original[i] != '\0'){
        copia[i] = original[i];
        i++;
    }
    copia[i] = '\0';
    return (0);
}

int main(){
    char copia[25], original[25];
    scanf("%s", original);

    invertString(copia, original);
    printf("Original: %s\n", original);
    printf("copia: %s\n", copia);
    return 0;
}
