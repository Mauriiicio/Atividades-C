#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numInscricao, idade = 0,idadeMulher = 0, contadorFeminino = 0,contadorMasculino = 0, MediaIdade = 0, cont = 0, idade45 = 0, idade35 = 0, menorIdade = -1;
    char sexo, experiencia;
    printf("Digite o numero da inscricao: ");
    scanf("%d", &numInscricao);

    while (numInscricao != 0){
        printf("Digite o sexo do candito F para feminino, M para masculino: ");
        scanf(" %c", &sexo);

        if(sexo == 'F'){
            printf("Digite a idade: ");
            scanf("%d", &idadeMulher);
            printf("Tem experiencia ? Responda s ou n: ");
            scanf(" %c", &experiencia);
            if(idadeMulher<35 && experiencia == 's')
                idade35++;

             if(menorIdade == - 1 || menorIdade > idadeMulher)
              menorIdade = idadeMulher;

            contadorFeminino = contadorFeminino + 1;

        }
         if(sexo == 'M'){
            printf("Digite a idade: ");
            scanf("%d", &idade);
            if(idade >= 45){
                idade45 += idade;
                cont++;
            }
            contadorMasculino = contadorMasculino + 1;
        }
        printf("----------------------------------------------------------------------------------------------------------------------\n");
        printf("Digite o numero da inscricao: ");
        scanf("%d", &numInscricao);

        }

    if(cont != 0)
    MediaIdade = idade45 / cont;
    printf("Candidatos feminino: %d \n", contadorFeminino);
    printf("Candidatos masculinos: %d \n", contadorMasculino);
    printf("Media da Idade: %d\n", MediaIdade);
    printf("Numeros de mulheres com menos de 35 anos e com expericencia: %d\n", idade35);
     printf("Menor idade entre mulheres: %d\n", menorIdade);

}
