#include <stdio.h>
int main() {
   int r,*s, p;
   float q;
    p =10;
    q =40.5;
    s =&p;
    printf("valor de s = 0x%x\n", s);
    printf("endere�o de s = 0x%x\n", &s);
    printf("valor de p = %d\n", p);
    printf("endere�o de p = 0x%x\n", &p);
}
