#include <stdio.h>
#include <stdlib.h>

int main()
{

    float NotaBim1, NotaBim2, MediaBim, ProvaFinal, MediaFinal;

    printf("Digite a nota do primeiro bimestre: \n");
    scanf("%f", &NotaBim1);
    printf("Digite a nota do segundo bimestre: \n");
    scanf("%f", &NotaBim2);
    MediaBim = (NotaBim1 + NotaBim2)/4;
    MediaFinal = MediaBim;
    if ((MediaBim < 7) && (MediaBim >= 5))
    {
    printf("Digite a nota da prova final: ");
    scanf("%f", &ProvaFinal);
    MediaFinal = (MediaBim * 6 + ProvaFinal * 4)/10;
    }
    if (MediaFinal > 5.5)
    printf("Aprovado com media final: %.2f \n", MediaFinal);
    else
    printf("Reprovado com media final: %.2f \n", MediaFinal);

}
