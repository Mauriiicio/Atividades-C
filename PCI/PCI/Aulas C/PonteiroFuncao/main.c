#include <stdio.h>
int *soma_vetor4(int *a, int *b, int n) {
    int * r;
    r=(int *) malloc(sizeof (int) * n);
    if (r==NULL) exit(1);
     int i;
     for (i=0; i<n; i++, a++, b++)
             r[i]=*a+*b;
      return r;
}
int main(){
    int i;
    int a[3]={1,2,3};
    int b[3]={4,5,6};
    int * rr;
    rr=soma_vetor4(a,b,3);
    for (i=0;i<3;i++)
        printf ("%d ", rr[i]);
}
