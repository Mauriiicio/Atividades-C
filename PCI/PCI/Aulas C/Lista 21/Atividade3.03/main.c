#include <stdio.h>
#include <stdlib.h>
typedef struct // Cria uma STRUCT para armazenar os dados
{
    //declaração das variaveis
    int inscricao, classe;
    float hrsNormal, hrsExtra;
    char nome[90];

} funcionario; // Define o nome do novo tipo criado

int main()
{
    //declaracao das variaveis
    float inss = 0, salarioBase = 0, salarioLiquido = 0, salarioExtra = 0, salahrNormal = 0, salarioBruto = 0;
    //declaracao da variavel struct
    funcionario func[100];
    //recebdno o salario base
    printf("Digite o salario por hora do funcionario: ");
    scanf("%f", &salarioBase);
    printf("-----------------------------FUNCIONARIO------------------------------\n");
    //repeticao dos 100 funcionarios e recebendo valores.
    for(int i = 0; i < 100; i++){
        printf("Digite o nome do funcionario %d: ", i+1);
        scanf("%s", &func[i].nome);
        printf("Digite o numero da inscricao: ");
        scanf("%d",&func[i].inscricao);
        printf("Digite o o numero da classe: ");
        scanf("%d",&func[i].classe);
        printf("Digite as horas normais: ");
        scanf("%f",&func[i].hrsNormal);
        printf("Digite as horas extras: ");
        scanf("%f",&func[i].hrsExtra);

        //verificacao se a classe é 1 ou 2
        if(func[i].classe == 1)
            salahrNormal = salarioBase * 1.3 * func[i].hrsNormal;
        if(func[i].classe == 2)
            salahrNormal = salarioBase * 1.9 * func[i].hrsNormal;

        //fazendo a conta de desconto do inss e do salario liquido
        salarioExtra = 1.3 * salahrNormal;
        salarioBruto =   salarioExtra - salahrNormal;
        inss = (salarioBruto * 8)/100;
        salarioLiquido = salarioBruto - inss;
        //mostrando o contra cheque.
        printf("-----------------------------Contra Cheque------------------------------\n");
        printf("Numero da inscricao: %d\t\t\t Nome: %s\n", func[i].inscricao, func[i].nome);
        printf("Salario horas normais: %.2f\n", salahrNormal);
        printf("Salario horas Extra: %.2f\n", salarioExtra);
        printf("Deducao INSS: %.2f\n", inss);
        printf("Salario Liquido %.2f\n", salarioLiquido);
        printf("-----------------------------FUNCIONARIO------------------------------\n");
    }




    return 0;
}
