#include <stdio.h>
void LeVetor (int *, int);
void ImprimeVetor (int *, int );
void TrocaVetores (int *, int *, int );
int main(){
	int vet1[5], vet2[5], i=3;

	printf ("Conteudo de i=%d\n", i);
	printf ("Endereco de i=%d\n", &i);
	printf ("Conteudo de vet1=%d\n", vet1);
	printf ("Endereco do primeiro elemento de vet1=%d\n", &vet1[0]);
	printf ("Conteudo do primeiro elemento de vet1=%d\n", vet1[0]);
	printf ("Endereco do segundo elemento de vet1=%d\n", &vet1[1]);
	printf ("Conteudo do segundo elemento de vet1=%d\n", vet1[1]);
	printf ("Endereco do terceiro elemento de vet1=%d\n", &vet1[2]);
	printf ("Conteudo do terceiro elemento de vet1=%d\n", vet1[2]);

	printf(" Lendo Vetor 1 --------\n");
	LeVetor(vet1,5);
	printf ("Conteudo de vet1=%d\n", vet1);
	printf ("Endereco do primeiro elemento de vet1=%d\n", &vet1[0]);
	printf ("Conteudo do primeiro elemento de vet1=%d\n", vet1[0]);
	printf ("Endereco do segundo elemento de vet1=%d\n", &vet1[1]);
	printf ("Conteudo do segundo elemento de vet1=%d\n", vet1[1]);
	printf ("Endereco do terceiro elemento de vet1=%d\n", &vet1[2]);
	printf ("Conteudo do terceiro elemento de vet1=%d\n", vet1[2]);

	printf(" ------ Lendo Vetor 2 --------\n");
	printf ("Endereco do primeiro elemento de vet2=%d\n", &vet2[0]);
	printf ("Conteudo do primeiro elemento de vet2=%d\n", vet2[0]);
	printf ("Endereco do segundo elemento de vet2=%d\n", &vet2[1]);
	printf ("Conteudo do segundo elemento de vet2=%d\n", vet2[1]);
	printf ("Endereco do terceiro elemento de vet2=%d\n", &vet2[2]);
	printf ("Conteudo do terceiro elemento de vet2=%d\n", vet2[2]);

	LeVetor(vet2,5);
	printf ("Endereco do primeiro elemento de vet2=%d\n", &vet2[0]);
	printf ("Conteudo do primeiro elemento de vet2=%d\n", vet2[0]);
	printf ("Endereco do segundo elemento de vet2=%d\n", &vet2[1]);
	printf ("Conteudo do segundo elemento de vet2=%d\n", vet2[1]);
	printf ("Endereco do terceiro elemento de vet2=%d\n", &vet2[2]);
	printf ("Conteudo do terceiro elemento de vet2=%d\n", vet2[2]);

	printf ("Imprimindo os vetores antes da troca ...\n");
	ImprimeVetor (vet1,5);
	ImprimeVetor (vet2,5);
	TrocaVetores(vet1,vet2,5);
    printf ("Imprimindo os vetores depois da troca ...\n");
	ImprimeVetor (vet1,5);
	ImprimeVetor (vet2,5);
}
void LeVetor(int vet[], int tam){
    int i;
    printf ("Conteudo de vet=%d\n", vet);
	for(i = 0; i < tam; i++){
	printf("Digite numero:");
	scanf("%d",&vet[i]);
    }
}
void ImprimeVetor (int *vet, int tam){
    int i;
    printf ("[");
    for(i = 0; i < tam; i++)
        printf("%d  ",vet[i]);
    printf ("]\n");
}
void TrocaVetores (int *vet1, int *vet2, int tam){
    int i, aux;
    for(i = 0; i < tam; i++){
        aux=vet1[i];
        vet1[i]=vet2[i];
        vet2[i]=aux;
    }
}
