#include <stdio.h>
int main() {
 // Declarar variáveis
 float preco;
 char categoria;
 float preco_final;

 printf("Digite o preco do ingresso: ");
 scanf("%f", &preco);
 printf("Selecione:\n");
 printf("E - estudante,\nA - Aposentado,\nN - normal\n");
 printf("Digite a categoria do cliente (E/A/N): ");
 scanf(" %c", &categoria);
 switch (categoria) {
 	case 'e':  case 'E':
		preco_final = preco * 0.5;
 		printf("Com desconto estudante: %f\n", preco_final);
 		break;
 	case 'a': case 'A':
 		preco_final = preco * 0.7;
 		printf("Com desconto aposentado: %f\n", preco_final);
 		break;
 	case 'n': case 'N':
 		printf("Preço sem desconto: %f\n", preco);
 		break;
 	default:
 		printf("Categoria invalida!\n");
 		break;
 }
}
