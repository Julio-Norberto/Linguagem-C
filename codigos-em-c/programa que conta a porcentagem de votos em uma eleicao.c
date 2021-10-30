#include <stdio.h>
#include <stdlib.h>

int main()
{
    int branco, nulos, validos, toteleitor;
    float percbrancos, percnulos, percvalidos;

    printf("informe a quantidade de votos brancos: ");
    scanf("%d", &branco);
    printf("Informe a quantidade de votos nulos: ");
    scanf("%d", &nulos);
    printf("Informe a quantidade de votos válidos: ");
    scanf("%d", &validos);
    printf("Por fim, informe o total de eleitores que participaram desta eleição: ");
    scanf("%d", &toteleitor);
    percbrancos = branco * 100 / toteleitor;
    percnulos = nulos * 100 / toteleitor;
    percvalidos = validos * 100 / toteleitor;
    printf("O percentual de votos brancos foi de: %2.f porcento\n", percbrancos);
    printf("O percentual de votos nulos foi de: %2.f porcento\n", percnulos);
    printf("E o percentual de votos válidos foi de: %2.f porcento\n", percvalidos);



}