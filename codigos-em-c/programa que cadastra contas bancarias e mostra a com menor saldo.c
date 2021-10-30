#include <stdio.h>
#include <stdlib.h>

main(){
    int conta[20], cont, menor = 1000000, escolha, escolha2, escolha3;
    char nome[20][20];
    float saldo[20];

    printf("Escolha uma opção: \n");
    printf("1- cadastrar contas\n");
    printf("2- vizualizar todas as contas\n");
    printf("3 - exibir conta com menor saldo\n");
    scanf("%d", &escolha);
    if(escolha == 1){
        for(cont = 0; cont < 20; cont++){
            printf("Informe o número da conta: ");
            scanf("%d", &conta[cont]);
            printf("Informe o nome do cliente: ");
            scanf("%s", &nome[cont]);
            printf("Informe o saldo: ");
            scanf("%f", &saldo[cont]);
            if(saldo[cont] < menor){
                menor = saldo[cont];
            }
        }
        printf("O que você quer fazer agora: \n");
        printf("2- vizualizar todas as contas\n");
        printf("3 - exibir conta com menor saldo\n");
        scanf("%d", &escolha2);
        if(escolha2 == 2){
            for(cont = 0; cont < 20; cont++){
                printf("cliente: %s | conta: %d\n", nome[cont], conta[cont]);
            }
            printf("O que você quer fazer agora: \n");
            printf("3 - exibir conta com menor saldo\n");
            printf("4 - sair\n");
            scanf("%d", &escolha3);
            if(escolha3 == 3){
                printf("O menor saldo é: %.2f\n", menor);
            }
            if(escolha3 == 4){
                printf("ENCERRANDO...\n");
            }
        }
        if(escolha2 == 3){
            printf("O menor saldo é: %.2f\n", menor);
        }

    }
    if(escolha == 2){
        printf("Você não inseriu os dados necessários\n");
    }
    if(escolha == 3){
        printf("Você não inseriu os dados necessários\n");
    }
}
