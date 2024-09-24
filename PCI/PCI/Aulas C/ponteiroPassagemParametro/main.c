#include<stdio.h>
#include <stdio.h>
void p(int a, int *b);
int main(){
    int x,y;
    scanf ("%d %d",&x,&y);
    p(x,&y);
    p(x,&y);
    printf ("%d e %d\n",x,y);
}
void p(int a, int *b){
   int aux;
   aux=*b;
   a=*b+4;
   *b=aux-3+a;
}
