#include <stdio.h>
#include <stdbool.h>
int main(){
    bool v1=true,v2=false,v3;
    v3=v1&&v2;
    printf("%d,%d,%d\n",v1,v2,v3);
    v3=v1||v2;
    printf("%d,%d,%d\n",v1,v2,v3);
    v3=!v1;
    printf("%d,%d,%d\n",v1,v2,v3);
    v3=(v1&&v2)||!v2;
    printf("%d,%d,%d\n",v1,v2,v3);
}

#include <stdio.h>
int main(){
    int idade;
    printf ("Informe sua idade: ");
    scanf ("%d", &idade);
    printf("Voce tem %d anos e passou %d anos da sua vida dormindo",idade,idade/3);
}
#include <stdio.h>
int main(){
    int idade;
    char nome[9];
    printf ("Informe seu nome: ");
    scanf ("%s", nome);
    printf ("Informe sua idade: ");
    scanf ("%d", &idade);
    printf("%s, voce ja viveu %d dias",nome,idade*365);
}

#include <stdio.h>
int main(){
    //21,3%
    float salario, novo_salario, aumento;
    printf ("Informe o salario: ");
    scanf ("%f", &salario);
    aumento=salario*21.3/100;
    novo_salario=salario+aumento;
    printf("Salario atual: %4.2f\n", salario);
    printf("Aumento: %4.2f\n", aumento);
    printf("Salario Novo: %4.2f\n", novo_salario);

}

#include <stdio.h>
int main(){
    //21,3%
    float salario, novo_salario;
    printf ("Informe o salario: ");
    scanf ("%f", &salario);
    novo_salario=salario*1.213;
    printf("Salario atual: %4.2f\n", salario);
    printf("Salario Novo: %4.2f\n", novo_salario);

}

/*x + x*j  = x(1+j)
salario + salario*0.213 = salario(1+0.213)= salario*1.213
*/

