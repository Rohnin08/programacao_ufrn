#include <stdio.h>

int main() {

	int opcao;
	float saldo = 1000.00, valorDeposito = 0, valorSaque = 0;
	
	printf("===== CAIXA ELETRONICO =====\n");
	printf("1 - Consultar saldo\n");
	printf("2 - Depositar\n");
	printf("3 - Sacar\n");
	printf("4 - Verificar limite\n");
	printf("5 - Encerrar\n");

	printf("Escolha uma opcao: ");
	scanf("%d", &opcao);
	
	switch(opcao) {
	
		case 1:
			printf("Saldo disponivel: R$%.2f", saldo);
			break;
		case 2:
			printf("==== Deposito ====\nQual o valor do deposito: ");
			scanf("%f", &valorDeposito);

			if (valorDeposito < 0) {
				printf("Operacao invalida");
			}
		
			else {
				saldo += valorDeposito;
				printf("Valor de R$%.f depositado com sucesso.\n", valorDeposito);
				printf("Seu saldo agora e: R$%.2f", saldo);
			}

			break;

		case 3:
			printf("==== Saque ====\nQual o valor do saque: ");
			scanf("%f", &valorSaque);

			if (valorSaque < 0) {
				printf("Valor invalido");
			}

			else {
				if (valorSaque > saldo) {
					printf("Saldo insuficiente!");
				}
		
				else {
					saldo -= valorSaque;
					printf("Saque realizado com sucesso!, saldo total: %.2f", saldo);
				}
			}
			break;

		case 4: {
			float limite = saldo * 0.30;
			printf("Limite: %.2f", limite);
			break;
		}

		case 5:
			printf("Operacao encerrada");
			break;

		default:
			printf("Operacao invalida, por favor, tente novamente mais tarde.");
	}

	return 0;

}