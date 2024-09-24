#include <stdio.h>
void push(int );
int pop(void);
int stack[50], *tos,*pl;

void main(void){
    int value;
    tos = stack;
/*Faz tos conter o topo da pilha */
    pl = stack;	/*inicializa pl */
    do {
       printf("\nEntre com o valor: (0) Pop, (-1) Sair, Caso contrario Push : ");
       scanf("%d",&value);
       if(value!=0)
          push(value);
       else
          printf("\nTirando valor do topo = %d\n",pop());
     }while(value != -1);
}

void push(int i){
    int *p=tos;
	pl++;
	if(pl==(tos+50)){
	    printf("Estouro da pilha");
	    exit(1);
	}
	*pl = i;
	for ( ;p<=pl ; p++)
        printf ("%d\t", *p);
}

int pop(void){
    int *p=tos;
	if(pl==tos){
	    printf("Pilha vazia");
	    exit(1);
	}
	pl--;
	for ( ;p<=pl ; p++)
        printf ("%d\t", *p);

	return *(pl+1);

}



