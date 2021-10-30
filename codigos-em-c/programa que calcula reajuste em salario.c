#include <stdio.h>
#include <stdlib.h>

int main()
{
    int salario, reajuste, novosalario, percen;

    printf("Informe o seu salário atual: ");
    scanf("%d", &salario);
    printf("Agora informe o reajuste (%): ");
    scanf("%d", &reajuste);
    percen = reajuste * salario / 100;
    novosalario = salario + percen;
    printf("O seu novo salário é de: %d R$", novosalario);

}