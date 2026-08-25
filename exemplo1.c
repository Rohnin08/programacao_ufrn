#include <stdio.h>

int main() {
	int valor1, valor2;
	
	// Leitura dos valores
	printf("Digite um valor: ");
	scanf("%d", &valor1);
	
	printf("Digite outro valor: ");
	scanf("%d", &valor2);
	
	// Resultados
	printf("\n===== RESULTADO =====\n");
	
	printf("Soma: %d + %d = %d\n", valor1, valor2, valor1 + valor2);
	printf("Subtracao: %d - %d = %d\n", valor1, valor2, valor1 - valor2);
	printf("Multiplicacao: %d * %d = %d\n", valor1, valor2, valor1 * valor2);

	if (valor2 != 0) {
		printf("Divisao: %d / %d = %d\n", valor1, valor2, valor1 / valor2);
		printf("Modulo: %d / %d = %d\n", valor1, valor2, valor1 % valor2);
	}
	
	else {
		printf("Nao da pra dividir por zero\n");
		printf("Nao da pra dividir por zero\n");
	}
	
	}

	