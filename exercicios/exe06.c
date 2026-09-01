#include <stdio.h>

int main() {

	int opcao, a, b, resultado;

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
	scanf("%d", &opcao);

	if ((a < 0) || (b < 0)) {
		printf("Os valores precisam ser positivos");
		return 0;
	}


	switch(opcao) {

		case 1:
			resultado = a & b;
			printf("%d em decimal. %x em hexadecimal\n", resultado, resultado);
			break;

		case 2:
			resultado = a | b;
			printf("%d em decimal. %x em hexadecimal\n", resultado, resultado);
			break;

		case 3:
			resultado = a ^ b;
			printf("%d em decimal. %x em hexadecimal\n", resultado, resultado);
			break;

		case 4:
			resultado = a << b;
			printf("%d em decimal. %x em hexadecimal\n", resultado, resultado);
			break;

		case 5:
			resultado = a >> b;
			printf("%d em decimal. %x em hexadecimal\n", resultado, resultado);
			break

		default:
			printf("Opcao invalida");
			break

	}

	return 0;
}