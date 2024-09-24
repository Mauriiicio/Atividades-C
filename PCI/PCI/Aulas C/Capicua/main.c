#include <stdio.h>
int tamanhoNum(int n)
{
	int i;
	i = 0;
	do
	{
		n /= 10;
		i++;
	}while(n > 0);

	return i;
}
void algorismosNum(int numero, int *vetor)
{
	int i;
	i = 0;
	do
	{
		vetor[i] = numero % 10;
		numero /= 10;
		i++;
	}while(numero > 0);
}

int numeroAlcontrario(int *vetor, int n)
{
	int i;
	int numero = 0;
	int aux = 1;
	for(i = n-1; i >= 0; i--)
	{
		numero += vetor[i] * aux;
		aux = aux * 10;
	}
    //printf("%d", numero);
	return numero;
}

int main(){
    int  tamanho, result[4], i;
    //numero = 0;
    //tamanho = tamanhoNum(numero);

	//algorismosNum(numero, result);


    for(i = 0; i < 6005; i++)
    {
        algorismosNum(i,result);
        if(numeroAlcontrario(result, tamanhoNum(i)) == i){
            printf("\n");
            printf("%d",i);
        }
    }
}
