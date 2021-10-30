#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    float maiorA = 0, menorA = 10000, mediaT, mediaM, altura;
    float quantidadeM = 0, quantidadeF = 0, somaF = 0, somaM = 0, qntdtot, somatot;
    char nome[20], homem[20], mulher[20];
    int cont, sexo;

    for (cont = 1; cont < 50; cont ++){
        printf("Informe seu nome: ");
        fflush(stdin);
        gets(nome);
        printf("Informe sua altura: ");
        scanf("%f", &altura);
        printf("Informe seu sexo (1 - FEMININO / 2 - MASCULINO): ");
        scanf("%d", &sexo);
        if ((altura > maiorA) && (sexo == 2)){
            strcpy(homem, nome);
            quantidadeM = quantidadeM + 1;
            somaM = somaM + altura;
        }
        if ((altura < menorA) && (sexo == 1)){
            strcpy(mulher, nome);
            quantidadeF = quantidadeF + 1;
            somaF = somaF + altura;
        }
    }
    mediaM = somaF / quantidadeF;
    mediaT = (somaM + somaF) / 6;
    printf("a maior altura da turma é: %.2f\n", maiorA);
    printf("a menor altura da turma é: %.2f\n", menorA);
    printf("a média da altura da turma é de: %.2f\n", mediaT);
    printf("a média da altura das mulheres é de %.2f\n", mediaM);
    printf("o nome do homem mais alto é: %s\n", homem);
    printf("o nome da mulher mais baixa é: %s\n", mulher);

}