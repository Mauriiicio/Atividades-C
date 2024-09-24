#include <stdio.h>
#include <stdlib.h>

int main()
{
    int CPF, Num, Dv1, Dv2, i;
    char nome[50];
    do{
        printf("Digite o nome: ");
        scanf("%s", &nome);
        printf("Digite o CPF: ");
        scanf("%d", &CPF);

        if(CPF == 0){
            printf("Bug do sistema");
            //return(0);
        }
        Num = CPF / 100;
        Dv1 = digitoVerificaro(Num);
        Num = Num * 10 + Dv1;
        Dv2 = digitoVerificaro(Num);
        Num = Num * 10 + Dv2;
        if(Num == CPF){
            printf("Nome: %s\n", nome);
            printf("CPF: %d\n", CPF);
            printf("Valido\n");
        }else{
            printf("Nome: %s\n", nome);
            printf("CPF: %d\n", CPF);
            printf("Invalido\n");
        }
        printf("Digite 0 para Sair ");
        scanf("%d", &i);
    }while(i != 0);

}

int digitoVerificaro(int n){
    int numero,soma,peso, d, dv, i;
    soma = 0;
    peso = 2;
    i = 0;
    do{
        d = numero % 10;
        soma = soma + (d * peso);
        numero = numero / 10;
        if(numero == 0){
            exit(1);
        }
        peso = peso + 1;
        i++;
    }while(i < 2);
    dv = 11 - (soma % 11);
    if(dv > 9){
        return(0);

    }else{
        return(dv);
    }
}
