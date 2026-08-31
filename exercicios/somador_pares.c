#include <stdio.h>

int main() {

	int n, soma = 0;

	printf("DIgite um numero qualquer: ");
	scanf("%d", &n);

	for (int i = 0; i <= n; i++) {
		if (i % 2 == 0) {
			soma += i;
		}
	}

	printf("%d", soma);

	return 0;
}
