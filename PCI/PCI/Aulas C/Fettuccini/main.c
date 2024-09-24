#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
   int num1, num2,  n, i , valorTermo ;

   printf ( "Digite o primeiro número:");
   scanf("%d", &num1);

   printf ( "Digite o segundo número:");
   scanf("%d", &num2);

   printf ( "Digite o numero de termos:");
   scanf("%d", &n);

   if(n<3)
   {
        printf ( "Error minimo termo é 3 ");
   }

   for(i = 3; i < n; i++){
    if(i % 2 == 0){
        valorTermo = num2 - num1;
    }else{
        valorTermo = num2 + num1;

    }
    printf("%d", valorTermo);
    num1 = num2;
    num2 = valorTermo;

    }

}
