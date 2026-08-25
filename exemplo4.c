include <stdio.h>

int main() {
	int valor1, valor2, opcao;

	printf("Digite o primeiro valor: ");
	scanf("%d", &valor1);
	printf("%d", &valor2);
	
	printf("Digite uma opção: \n");
	printf("1 - Soma\n2 -Subtração\n3 - Multiplicação\n4 - Divisão\n");
	prinf("Opação: \n");
	scanf("%d", &opcao);

	switch (opcao) {

		case 1:
			printf("%d + %d = %d\n", valor1, valor2, valor1 + valor2);
			break;
		case 2:
			printf("%d - %d = %d\n", valor1, valor2, valor1 - valor2);
			break;
		case 3: 
			printf("%d * %d = %d\n", valor1, valor2, valor1 * valor2);
			break;
			
	}
}