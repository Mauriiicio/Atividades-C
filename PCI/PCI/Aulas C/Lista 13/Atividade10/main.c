#include <stdio.h>
#include <stdlib.h>

int main()
{
    int canal = 0, espectadores, canal4 = 0, canal5 = 0, canal7 = 0,canal12 = 0, pessoas;
    float porc_canal4, porc_canal5,porc_canal7, porc_canal12;

    do{
        printf("Informe o canal que estava assistindo: \n");
        scanf("%d", &canal);
        if(canal!=0){
        printf("Quantas pessoas estavam assistindo: \n");
        scanf("%d", &espectadores);
        pessoas = pessoas + espectadores;
            if(canal == 4){
               canal4 = canal4 + espectadores;
               }else if(canal == 5){
                canal5 = canal5 + espectadores;
               }else if(canal == 7){
                canal7 = canal7 + espectadores;
               }else if(canal == 12){
                canal12 = canal12 + espectadores;
            }
        }
    }
    while(canal != 0 );

        porc_canal4 = (canal4 / pessoas) * 100;
        porc_canal5 = (canal5 / pessoas) * 100;
        porc_canal7 = (canal7 / pessoas) * 100;
        porc_canal12 =(canal12 / pessoas) * 100;
        printf("%d Pessoas\n ", pessoas);
        printf("%.2f%% no canal 4\n ", porc_canal4);
        printf("%.2f%% no canal 5\n ", porc_canal5);
        printf("%.2f%% no canal 7\n ", porc_canal7);
        printf("%.2f%% no canal 12\n ", porc_canal12);

}


