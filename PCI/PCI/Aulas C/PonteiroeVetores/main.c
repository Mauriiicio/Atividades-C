#include <stdio.h>
void imprime_vetor(int v[], int n){
   int i;
   for (i = 0; i < n; i++)
      printf("%d ", v[i]);
   printf("\n");
}
void imprime_vetor2(int *p, int n){
   int i;
   for (i = 0; i < n; i++) {
       printf("%d ", *p);
       p++;
   }
   printf("\n");
}
int main() {
   int v[] = {10, 20, 30, 40, 50};
   imprime_vetor(v, 5);
   imprime_vetor2(v, 5);
   imprime_vetor(&v[1], 4);
   imprime_vetor2(&v[1], 4);
}
