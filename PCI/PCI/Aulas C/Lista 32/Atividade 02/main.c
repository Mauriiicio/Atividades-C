void main(void){
    int x = 5 , y = 6; //declara��o variaveis;
    int px,py; //declara��o variaveis;
    px = &x; //px recebe o endere�o de x;
    py = &y; //py recebe o endere�o de y;

    if(px < py) //verifica se o endere�o de px � menor que py, como a alocacao � feito de baixo pra cima essa verificacao da falsa;
        printf("py-px = %u\n",py-px);

    else
        printf("px-py = %u\n",px-py);//imprime os valores da subtra��os dos endere�os, ficando o valor de 4

    printf("px = %u, px = %d, &px = %u\n",px, px, &px); //imprime o valor de px, valor de px, e o endere�o de px
    printf("py = %u, py = %d, &py = %u\n",py,py,&py); //imprime o valor de px, valor de px, e o endere�o de px

    px++;//acrescenta mais 1 no valor de px;
    printf("px = %u, px = %d, &px = %u\n",px,px,&px); //imprime o valor de px, valor de px, e o endere�o de px
    py = px + 3; //py recebe o valor de px mais 3;
    printf("py = %u, py = %d, &py = %u\n",py,py,&py); //imprime o valor de px, valor de px, e o endere�o de px
    printf("py-px = %u\n",py-px);//imprime os valores da subtra��os dos endere�os, ficando o valor 3
}
