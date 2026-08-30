#include <stdio.h>

int main() {

	// Definição dos valores
	int consumoEnergia;

	float tarifa;

	printf("CALCULADORA DE TARIFA DE ENERGIA\n");

	printf("Qual foi seu consumo de energia: ");
	scanf("%d", &consumoEnergia);

	// Se for negativo
	if (consumoEnergia < 0) {
		printf("Consumo invalido!");
	}


	// Se não, vamos para os calculos
	else {

		// Faixa de 0 - 100
		if ((consumoEnergia >= 0) && (consumoEnergia <= 100)) {
			tarifa = consumoEnergia * 0.50;
			printf("Valor total: R$%.2f", tarifa);

		}

		// Faixa de 101 - 200
		else if ((consumoEnergia >=101) && (consumoEnergia <= 200)){
			tarifa = consumoEnergia * 0.75;
			printf("Valor total: R$%.2f", tarifa);

		}

		// Faixa de 200
		else if (consumoEnergia > 200){

			tarifa = consumoEnergia * 1.20;

			if (consumoEnergia > 500) {
				tarifa * 1.15;
				}

			printf("Valor Total : R$%.2f", tarifa);

			}


		}

	return 0;
}