#include <stdio.h>
#include <stdlib.h>
typedef struct {
 float pontox;
 float pontoy;
} ponto2d;

struct lista  // definicao da estrutura Lista, a qual eh uma lista simplesmente encadeada com um
{
    //valor inteiro
    struct lista *prox;
    ponto2d c;
    float r;
};

typedef struct lista Lista; // estrutura "lista" passa a ser o tipo de dados "Lista"
int tam;
// Prototipos de funcoes e procedimentos
int menu(void);
void inicia(Lista*PILHA);
void opcao(Lista*PILHA, int op);
void exibe(Lista *PILHA);
void libera(Lista *PILHA);
void push(Lista *PILHA);
Lista *pop(Lista *PILHA);
float maiorRaio(Lista *pilha);
float calculaDistancia(float x1, float y1, float x2, float y2);
void ponto(Lista *pilha);
//Programa Principal
int main(void)
{
    int opt;
    Lista *PILHA = (Lista *) malloc(sizeof(Lista)); // Alocacao de memoria do primeiro elemento
    //da lista
    if(!PILHA)
    {
        printf("Sem memoria disponivel!\n");
        exit(1);
    }
    else   // Se a alocacao tiver sucesso entraremos em um menu do qual sairemos so quando
    {
       // a opcao for 0
        inicia(PILHA);
        do
        {
            opt=menu();
            opcao(PILHA,opt);
        }
        while(opt);
        free(PILHA);
    }
}
void inicia(Lista *PILHA)
{
    PILHA->prox = NULL;
    tam=0;
}
int menu(void)
{
    int opt;
    printf("Escolha a opcao\n");
    printf("0. Sair\n");
    printf("1. Zerar PILHA\n");
    printf("2. Exibir PILHA\n");
    printf("3. PUSH\n");
    printf("4. POP\n");
    printf("5. Maior Raio\n");
    printf("6. Verifica ponto\n");
    printf("Opcao: ");
    scanf("%d", &opt);
    return opt;
}
void opcao(Lista *PILHA, int op)
{
    Lista *tmp;
    switch(op)
    {
    case 0:
        libera(PILHA);
        break;
    case 1:
        libera(PILHA);
        inicia(PILHA);
        break;
    case 2:
        exibe(PILHA);
        break;
    case 3:
        push(PILHA);
        break;
    case 4:
        tmp= pop(PILHA);
        if(tmp != NULL){
            printf("Retirado: %.2f %.2f %.2f\n\n", tmp->c.pontox, tmp->c.pontoy, tmp->r);
        }
        break;
    case 5:
      printf("Maior Raio %.2f\n\n",  maiorRaio(PILHA));
        break;
    case 6:
        ponto(PILHA);
        break;
    default:
        printf("Comando invalido\n\n");
    }
}
int vazia(Lista *PILHA)
{
    if(PILHA->prox == NULL)
        return 1;
    else return 0;
}
Lista *aloca()
{
    Lista *novo=(Lista *) malloc(sizeof(Lista));
    if(!novo)
    {
        printf("Sem memoria disponivel!\n");
        exit(1);
    }
    else
    {
        printf("Novo ponto x: ");
        scanf("%f", &novo->c.pontox);
        printf("Novo ponto y: ");
        scanf("%f", &novo->c.pontoy);
        printf("Novo ponto raio: ");
        scanf("%f", &novo->r);
        return novo;
    }
}

void exibe(Lista *PILHA)
{
    if(vazia(PILHA))
    {
        printf("PILHA vazia!\n\n");
        return ;
    }
    Lista *tmp;
    tmp = PILHA->prox;
    printf("PILHA:");
    while( tmp != NULL)
    {
        printf("%.2f\t", tmp->c.pontox);
        printf("%.2f\t", tmp->c.pontoy);
        printf("%.2f\t | ", tmp->r);
        tmp = tmp->prox;
    }
    printf("\n ");
    int count;
    for(count=0 ; count < tam ; count++)
        printf(" ^ ");
    printf("\nOrdem:");
    for(count=0 ; count < tam ; count++)
        printf("%5d", count+1);
    printf("\n\n");
}
void libera(Lista *PILHA)
{
    if(!vazia(PILHA))
    {
        Lista *proxNo, *atual;
        atual = PILHA->prox;
        while(atual != NULL)
        {
            proxNo = atual->prox;
            free(atual);
            atual = proxNo;
        }
    }
}

void push(Lista *PILHA)
{
    Lista *novo=aloca();
    novo->prox = NULL;
    if(vazia(PILHA)) PILHA->prox=novo;
    else
    {
        Lista *tmp = PILHA->prox;
        while(tmp->prox != NULL)
            tmp = tmp->prox;
        tmp->prox = novo;
    }
    tam++;
}

Lista *pop(Lista *PILHA)
{
    if(PILHA->prox == NULL)
    {
        printf("PILHA ja vazia\n\n");
        return NULL;
    }
    else
    {
        Lista *ultimo = PILHA->prox, *penultimo = PILHA;
        while(ultimo->prox != NULL)
        {
            penultimo = ultimo;
            ultimo = ultimo->prox;
        }
        penultimo->prox = NULL;
        tam--;
        return ultimo;
    }
}

float maiorRaio(Lista *pilha){
    float raio = -1;
    float raioTemp;
    Lista *temp = pilha;
    if(vazia(pilha)){
            return(0);
        printf("Pilha Vazia \n");
    }

    do{
        raioTemp = 3.14 * temp->r;
        if(raioTemp > raio){
            raio = raioTemp;
        }
        temp = temp->prox;
    }while(temp->prox);
}

float calculaDistancia(float x1, float y1, float x2, float y2)
{
    float distancia;
    distancia = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    return distancia;
}

void ponto(Lista *pilha){
    Lista *temp = pilha;
    float distancia, x, y;
    int count = 0;
    if(vazia(pilha)){
            return(0);
        printf("Pilha Vazia \n");
    }
    printf("Digite x: ");
    scanf("%f", &x);
    printf("Digite y: ");
    scanf("%f", &y);
    do{

        distancia = calculaDistancia(temp->c.pontox, temp->c.pontoy, x, y);
        if(temp->r == distancia){
            printf("Ponto esta na borda do elemento %d\n", count);
        }else if(temp->r > distancia){
            printf("Ponto esta na fora do elemento %d\n", count);
        }else{
            printf("Ponto esta na dentro do elemento %d\n", count);
        }
        count++;
        temp = temp->prox;
    }while(temp->prox);

}
