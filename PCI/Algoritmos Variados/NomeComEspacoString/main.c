#include<stdio.h>
int main(){
    char st[80], st2[80];
    int a;
    printf("\nEntre com nome sem espacos:");
    scanf("%s",st);
    printf("\nEntre com nome com espacos:");
    scanf(" %[^\n]",st2);
    printf("\nEntre com idade:");
    scanf("%d",&a);
    printf("\n Digitado: %s, %s e %d\n",st, st2 ,a);
}
