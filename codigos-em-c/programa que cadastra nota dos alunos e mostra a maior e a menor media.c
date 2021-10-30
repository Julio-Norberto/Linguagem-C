#include <stdio.h>
#include <stdlib.h>

main(){
    char nome[15][20], melhoraluno, pioraluno;
    float nota1[15], nota2[15], media[15], maior = 0, menor = 1000000;
    int escolha, escolha2, escolha3, cont;

    printf("Escolha a opção: \n");
    printf("1- preencher nome e nota dos alunos\n");
    printf("2- média geral dos alunos\n");
    printf("3- Exibir candidato com maior e menor nota\n");
    printf("0- finalizar execução\n");
    scanf("%d", &escolha);
    if(escolha == 1){
        for(cont = 0; cont < 15; cont ++){
            printf("Informe o nome do aluno: ");
            scanf("%s", &nome[cont]);
            printf("Informe a primeira nota: ");
            scanf("%f", &nota1[cont]);
            printf("Informe a segunda nota: ");
            scanf("%f", &nota2[cont]);
            media[cont] = (nota1[cont] + nota2[cont]) / 2;
            if(media[cont] > maior){
                maior = media[cont];
                melhoraluno = nome[cont];
            }
            if(media[cont] < menor){
                menor = media[cont];
                pioraluno = nome[cont];
            }
        }
        printf("O que quer fazer agora? \n");
        printf("2- média geral dos alunos\n");
        printf("3- Exibir candidato com maior e menor nota\n");
        printf("0- finalizar execução\n");
        scanf("%d", &escolha2);
        if(escolha2 == 2){
            for(cont = 0; cont < 15; cont++){
                printf("a média do aluno %s é %2.f:\n ", nome[cont], media[cont]);
            }
            printf("O que você quer fazer agora: \n");
            printf("3- Exibir candidato com maior e menor nota\n");
            printf("0- finalizar execução\n");
            scanf("%d", &escolha3);

            if(escolha2 = 3){
            printf("O candidato que teve a maior nota foi %s, nota: %.2f\n", melhoraluno, maior);
            printf("O candidato que teve a menor nota foi %s, nota: %.2f\n", pioraluno, menor);
        }
        if(escolha = 0){
            printf("ENCERRANDO...");
        }

    }
    if(escolha == 2){
        printf("Você não preencheu os dados necessários\n");
        }

        if(escolha == 3){
            printf("Você não preencheu os dados necessários\n");
        }
        if(escolha == 0){
            printf("ENCERRANDO...\n");
        }
}