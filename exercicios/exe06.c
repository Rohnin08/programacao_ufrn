#include <stdio.h>

int main() {

	int operacao, a, b;

	printf("1 - E bit a bit (&)");
	printf("2 - OU bit a bit (|)");
	printf("3 - OU exclusivo (^)");
	printf("4 - Deslocamento a esquerda (<<)");
	printf("5 - Deslocamento a direita (>>)");

	printf("Digite o primeiro nuuero: ");
	scanf("%d", &a);

	printf("Digite o segundo numero: ");
	scanf("%d", &b);
	
	printf("Digite a operacao: ");
	scanf("%d", &operacao);

	if ((a < 0) || (b < 0)) {
		printf("Os valores precisam ser positivos")
		return 0;
	}


	switch(operacao) {

		case 1:

		case 2:

		case 3:

		case 4:

		case 5:

		default:




	}

	return 0;
}