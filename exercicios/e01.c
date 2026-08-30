#include <stdio.h>

int main() {
	float lado1, lado2, lado3;

	// Lado 1
	printf("Digite o primeiro lado do triangulo: ");
	scanf("%d", &lado1);
	// Lado 2
	printf("Digite o segundo lado do triangulo: ");
	scanf("%d", &lado2);
	// Lado 3
	printf("Digite o terceiro lado do triangulo: ");
	scanf("%d", &lado3);
	
	// Verificação
	if ((lado1 + lado2) > lado3 && (lado1 + lado3) > lado2 && (lado2 + lado3) > lado1) {
		if ((lado1 && lado2 && lado3) >=0) {
			if (lado1 == lado2 && lado2 == lado3) {
			printf("O Triangulo Equilatero!"); 
		}

			else if ((lado1 == lado2) || (lado1 == lado3) || (lado2 == lado3)) {
			printf("Triangulo Isosceles!"); 
		}
	
			else if ((lado1 != lado2) && (lado2 != lado3)){
			printf("Triangulo Escaleno"); 
		}

		}
		else {
			printf("Existe pelo menos um numero negativo nos lados do triangulo");
		}
			
	}


	else {

		printf("Nao forma um triangulo.");
	}

	return 0;
		
}
		