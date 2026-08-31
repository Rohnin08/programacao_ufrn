#include <stdio.h>

int main() {

	int fatorial = 0, N;

	printf("=== Calculadora de fatorial ===\n");
	printf(".............Digite um numero: ");
	scanf("%d", &N);

	for (int i = 1; i <= N;i++) {
		fatorial = N * (N-i);
	}

	printf("%d", fatorial);

	return 0;
}