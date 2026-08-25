#include <stdio.h>

int main() {
	char nome[50];
	int idade;
	float altura;
	
	printf("Digite seu nome: ");
	scanf("%s", &nome);
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	printf("Bem vindo(a), %s! Voce tem %d.\n", nome, idade);
	
	return 0;

}