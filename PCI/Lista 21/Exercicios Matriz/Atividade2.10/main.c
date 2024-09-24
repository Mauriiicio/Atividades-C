#include <stdio.h>
int main(){
    int voos[5][4], i, j, ident, voo_desej;
    float valor[5];

    printf ("Leitura de dados dos 5 voos ");
    for (i=0;i<5; i++){
        printf ("Informe o numero do voo %d: ", i);
        scanf ("%d", &voos[i][0]);
        do {
            printf ("Informe o tipo de aviao (707, 727, 737): ");
            scanf ("%d", &voos[i][1]);
        }while (voos[i][1]!=707 && voos[i][1]!=727 && voos[i][1]!=737 );

        if (voos[i][1]==707)
            voos[i][2]=voos[i][3]=10;
        else if (voos[i][1]==727)
            voos[i][2]=voos[i][3]=7;
        else
            voos[i][2]=voos[i][3]=5;
        printf ("Informe o preco da passagem do voo %d: ", i);
        scanf ("%f", &valor[i]);
    }
    printf ("Iniciamos as reservas das passagens\n");
    printf ("Informe o numero de identidade do passageiro: ");
    scanf ("%d", &ident);
    while (ident!=0){
        printf ("Informe o numero de voo desejado: ");
        scanf ("%d", &voo_desej);
        for (i=0;i<5;i++){
            if (voo_desej==voos[i][0]){
                if (voos[i][3]>0){
                    voos[i][3]--;
                    printf ("O numero de identidade do passageiro eh %d\n", ident);
                    printf ("O numero de voo desejado eh %d\n", voo_desej);
                    printf ("O preco da passagem eh %3.2f\n", valor[i]);
                    printf ("RESERVA CONFIRMADA\n");
                }else{
                    printf ("O numero de identidade do passageiro eh %d\n", ident);
                    printf ("O numero de voo desejado eh %d\n", voo_desej);
                    printf ("VOO LOTADO\n");
                }
                i=5;
            }else
                printf ("O voo informado nao existe no cadastro de voos\n");
         }
         printf ("Informe o numero de identidade do passageiro: ");
         scanf ("%d", &ident);
    }
    printf ("Determinando lucros ou prejuizos \n");
    for (i=0;i<5; i++){
        if ((voos[i][2]-voos[i][3])>voos[i][2]*0.6)
            printf (" LUCRO NO VOO ");
        else if ((voos[i][2]-voos[i][3])<voos[i][2]*0.6)
            printf (" PREJUIZO NO VOO ");
        else
            printf (" NAO HOUVE NEM LUCRO NEM PREJUIZO NO VOO ");
    }

}
/*    0    1    2    3
    0 456  727  170   50
    1 567  707  200   200
    2 732  727  170   170
    3 215  737  120   120
    4 122  707  200   200
    */
