#include <stdio.h>
int main() {
	int a, b, c;
	printf("Digite tres numeros: ");
	scanf("%d %d %d", &a, &b, &c);
	if ((a <b) && (a < c)) /* Menor numero: a */
        if (b < c)
            printf("Ordem: %d, %d, %d\n", a, b, c);
        else
            printf("Ordem: %d, %d, %d\n", a, c, b);
    else if (b < c) { /* Menor numero: b */
        if (a < c)
            printf("Ordem: %d, %d, %d\n", b, a, c);
        else
            printf("Ordem: %d, %d, %d\n", b, c, a);
    } else { /* Menor numero: c */
        if (a < b)
         	printf("Ordem: %d, %d, %d\n", c, a, b);
        else
            printf("Ordem: %d, %d, %d\n", c, b, a);
    }
}


/*
#include <stdio.h>
int main() {  /* Solucao 2 */
//	int a, b, c, aux;
//	printf("Digite tres numeros: ");
//	scanf("%d %d %d", &a, &b, &c);
 //   if (a>b || a>c)  /* Condição para a não ser o menor */
//		if (b<c){  /* Troca a por b */
 //          aux =a;
  //          a =b;
    //        b =aux;
      //  }else{    /* Troca a por c */
        //    aux =a;
          //  a =c;
            //c =aux;
       // }
    //if  (b>c) { /* Troca b por c */
     //   aux =b;
      //  b =c;
       // c =aux;
    //}
   // printf("Ordem: %d, %d, %d\n", a, b, c);
//}

