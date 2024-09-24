#include<math.h>
#include<stdio.h>
#include<string.h>

int main(){

    int qtd_criancas, mesesvida,contador_Crianc = 0,contador_crianc_mascu = 0, contador_menos_24meses = 0;
    float porc_mortas,por_morta_masc , porc_menores_24;
    char sexo[10];//CHAR COM VETOR VIRA STRING E DEVE SE USAR O S NO %
    printf("Digite o numero de crianca que nasceu no periodo: \n ");
    scanf("%d",&qtd_criancas);
    printf("Digite o sexo da criança: \n ");
    scanf("%s",sexo);//STRING NAO PRECISA DO & ?
    printf("Digite a idade da crianca em meses: \n ");
    scanf("%d",&mesesvida);

        while (strcmp(sexo,"VAZIO") != 0){ //strcmp é um comparador de string;
            contador_Crianc++;

            if (strcmp(sexo,"MASCULINO") == 0){
                contador_crianc_mascu++;
            }

            if (mesesvida <= 24){
                contador_menos_24meses++;
            }
            printf("Digite o sexo da criança: \n ");
            scanf("%s",sexo);
            printf("Digite a idade da crianca em meses: \n ");
            scanf("%d",&mesesvida);
        }

        porc_mortas = (float) (contador_Crianc * 100) / qtd_criancas;
        por_morta_masc =  (float) (contador_crianc_mascu * 100) / qtd_criancas;
        porc_menores_24 = (float) (contador_menos_24meses * 100) / qtd_criancas;

        printf("Porcentagem de mortos: %f\n",porc_mortas);
        printf("Porcentagem de masculinos mortos: %f\n",por_morta_masc);
        printf("Porcentagem de mortos com menos de 24 meses: %f\n",porc_menores_24);

    return 0;
}
