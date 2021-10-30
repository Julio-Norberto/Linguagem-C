#include <stdio.h>

int main(){
    int fat, n;
    printf("Informe um número: ");  
    scanf("%d", &n) ;

    for(fat = 1; n > 1; n = n - 1){
        fat = fat * n;
    }

    printf("o fatorial desse número é: %d\n", fat);
    return 0;
}