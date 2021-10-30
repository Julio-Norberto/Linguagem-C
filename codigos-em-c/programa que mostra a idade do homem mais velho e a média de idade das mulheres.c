#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char nome[20], homemvelho[20];
	int idade, idadevelho = 0, cont, sexo;
	float mediamulher, totmulher = 0, soma = 0;

	for(cont = 1; cont < 20; cont++){
		printf("Digite um nome: ");
		fflush(stdin);
		gets(nome);
		printf("informe a idade: ");
		scanf("%d", &idade);
		printf("informe o sexo (1 - masculino / 2 - feminino): ");
		scanf("%d", &sexo);
		if((idade > idadevelho) && (sexo == 1)){
			strcpy(homemvelho, nome);
			idadevelho = idade; 
		}
		if(sexo == 2){
			totmulher = totmulher + 1;
			soma = soma + idade;
		}
		printf("\n%s\n", nome);
	}
	mediamulher = soma / totmulher;
	printf("o nome do homem mais velho é: %s\n", homemvelho);
	printf("a media da idade das mulheres é de: %.2f", mediamulher);
}