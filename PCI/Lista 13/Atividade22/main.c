#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declarando as variaveis
    int x, y, qntradio_standart, qntradio_luxo, qntoper_standart, qntoper_luxo;
	float lucrostandart, lucroluxo;
	//Recebendo valores de X e Y
    printf("Valor de X:" );
	scanf("%d",&x);
	printf("Valor de Y:" );
	scanf("%d",&y);

    //Os valores de x e y passados para variavel de lucro
	lucrostandart = x;
	lucroluxo = y;

    //Divide o lucro pelo numero maximo de funcionario em cada setor, para obter o numero de radios fabricado.
	qntradio_standart = x / 24;
	qntradio_luxo = y /32;
    //Multiplica a quantidade de radios fabricados pelo numero de operarios nescessario para fazer cada 1, sabendo assim quantos foram nescessario.
	qntoper_standart = qntradio_standart * 1;
	qntoper_luxo = qntradio_luxo * 2;

	//Imprimi os valores de lucro, quantidade.
	printf("O lucro do radio standard: %.2f\n", lucrostandart);
	printf("O lucro do radio luxo: %.2f\n", lucroluxo);
	printf("A quantidade de radio standard: %d\n", qntradio_standart);
	printf("A quantidade de radio luxo: %d\n", qntradio_luxo);
	printf("A quantidade de operarios utilizados na producao do radio standard: %d\n", qntoper_standart);
	printf("A quantidade de operarios utilizados na producao do radio luxo: %d\n", qntoper_luxo);
}
