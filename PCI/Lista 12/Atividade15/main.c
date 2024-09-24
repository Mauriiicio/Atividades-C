#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numMenu;
    printf("Digite um numero para selecionar o prato do cardapio: \n");
    printf("1 - Miojo \n2 - Churrasco \n3 - Sashimi \n4 - Hot Dog \n5 - Pudim\n \n");
    scanf("%d", &numMenu);
    switch(numMenu){
    case 1:
      printf("Macarra Instantaneo Turma da monica de feijao.");
      break;
    case 2:
      printf("Picanha passada no alho assado no fogo medio.");
      break;
    case 3:
      printf("Peixe Cru");
      break;
    case 4:
      printf("Pao, 4 salsicha, molho, milho, pure de batata, mandioca, ervilha, ketchup, maionese, mucarela, vinagrete, mortadela e requeijao light");
      break;
    case 5:
      printf("Sobremesa gostosa com calda");
      break;

    default :
        printf("Este item nao esta disponivel");
    }
}


