#include <stdio.h>


int main() {

	int codigoProduto, quantidade = 0, sobremesa;
	char *produto;
	float preco = 0, valorProdutos, valorSobremesa = 0;
	float desconto = 0, valorFinal;

	printf("===== MENU =====\n1 - Hambúrguer ........ R$ 18,00\n2 - X-Salada .......... R$ 22,00\n3 - X-Bacon ........... R$ 25,00\n4 - Batata Frita ...... R$ 12,00\n5 - Refrigerante ...... R$ 7,00");

	printf("Escolha um dos produtos: ");
	scanf("%d",&codigoProduto);
	printf("Quantas unidades:? ");
	scanf("%d", &quantidade);
	printf("Deseja adicionar sobremesa(0 = Não|1 = Sim)?: ");
	scanf("%d", &sobremesa);

	switch (codigoProduto) {
		case 1:
			produto = "Hambúrguer";
			preco = 18.00;
			break;

		case 2:
			produto = "Hambúrguer";
			preco = 22.00;
			break;

		case 3:
			produto = "X-Bacon";
			preco = 25.00;
			break;

		case 4:
			produto = "Batata Frita";
			preco = 12.00;
			break;

		case 5:
			produto = "Refrigerante";
			preco = 7.00;
			break;
		default:
			printf("Valor invalido...");
	}

	valorProdutos = preco*quantidade;

	if (sobremesa == 1) {
		valorSobremesa = 8.00;
	}

	float total = valorProdutos + valorSobremesa;



	return 0;
}