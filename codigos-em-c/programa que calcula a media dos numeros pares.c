#include <stdio.h>
#include <stdlib.h>

int main(){

    float soma = 0, media;
    int num, aux = 0;

    do{
        printf("informe um número: ");
        scanf("%d", &num);
        if ((num % 2 == 0) && (num != 0)){
            soma = soma + num;
            aux = aux + 1;
        }
    }while (num != 0);
    media = soma / aux;
    printf("a média dos números pares é de %.2f\n", media);
}
