#include <stdio.h>

// Funcao recursiva que recebe um inteiro n >= 1
// devolve o n-esimo termo da sequencia de Fibonacci.

int fibonacci(int n) {
  int x;

  if (n == 1) {
    return(1);
  }

  if (n == 2) {
    return(1);
  }

  x = fibonacci(n-1) + fibonacci(n-2);
  return(x);
}

// Funcao principal.

int main() {
  int n = 5, i;
  for (i = 1; i <= n; i++) {
    printf("%d ", fibonacci(i));
  }
  printf("\n");
  return(0);
}
