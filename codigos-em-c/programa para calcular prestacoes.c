#include <stdio.h>
#include <stdlib.h>

int main()
{
    int totprest, totpag, valprest, totparc;
    float saldodev;
    printf("Informe o total de prestações negociadas: ");
    scanf("%d", &totprest);
    printf("Informe o total de prestações já pagas: ");
    scanf("%d", &totpag);
    printf("Agora informe o valor das prestações (R$): ");
    scanf("%d", &valprest);
    totparc = totprest - totpag;
    saldodev = totparc * valprest;
    printf("Você ainda tem: %d prestações a pagar\n", totparc);
    printf("Ao todo sua divida atual é de: %2.f R$", saldodev);
}