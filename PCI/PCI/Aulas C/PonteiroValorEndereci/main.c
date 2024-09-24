#include <stdio.h>
int main() {
   int r,*s, p;
   float q;
    p =10;
    q =40.5;
    s =&p;
    printf("valor de s = 0x%x\n", s);
    printf("endereço de s = 0x%x\n", &s);
    printf("valor de p = %d\n", p);
    printf("endereço de p = 0x%x\n", &p);
}
