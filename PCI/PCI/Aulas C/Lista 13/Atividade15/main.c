#include <stdio.h>
#include <stdlib.h>

int main()
{
     int i, num_conta, quant_trans;
    float sald_atual, sald_min, taxa, valor;
    char cod_trans;

    printf ("Informe numero de conta: ");
    scanf ("%d", &num_conta);
    while (num_conta!=0){
        printf ("Informe o valor do saldo atual: ");
        scanf ("%f", &sald_atual);
        printf ("Informe o valor do saldo minimo: ");
        scanf ("%f", &sald_min);
        printf ("Informe a quantidade de transacoes: ");
        scanf ("%d", &quant_trans);
        printf ("Informe o valor da taxa de servico: ");
        scanf ("%f", &taxa);
        for (i=1;i<=quant_trans;i++){
            printf ("Informe o codigo da transacao <D/R>: ");
            scanf (" %c", &cod_trans);
            printf ("Informe o valor da transacao: ");
            scanf ("%f", &valor);
            if (cod_trans=='D')
                sald_atual=sald_atual+valor;
            else
                sald_atual=sald_atual-valor;
            if (sald_atual<sald_min)
                sald_atual=sald_atual-taxa;
        }
        printf ("Numero de Conta: %d\n", num_conta);
        printf ("Saldo Calculado: %3.2f\n", sald_atual);
        if (sald_atual<=0)
            printf ("NAO HA FUNDOS\n");

        printf ("Informe numero de conta: ");
        scanf ("%d", &num_conta);
    }
}
