#include <stdio.h>


int main() {

	int codigoProduto, quantidade = 0, sobremesa;
	char *produto;
	float preco = 0, valorProdutos, valorSobremesa = 0;
	float desconto = 0, valorFinal;

	printf("===== MENU =====\n1 - Hamburguer ........ R$ 18,00\n2 - X-Salada .......... R$ 22,00\n3 - X-Bacon ........... R$ 25,00\n4 - Batata Frita ...... R$ 12,00\n5 - Refrigerante ...... R$ 7,00\n");

	printf("Escolha um dos produtos: ");
	scanf("%d",&codigoProduto);
	printf("Quantas unidades?: ");
	scanf("%d", &quantidade);
	printf("Deseja adicionar sobremesa(0 = Não|1 = Sim)?: ");
	scanf("%d", &sobremesa);

	switch (codigoProduto) {
		case 1:
			produto = "Hamburguer";
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
			printf("Produto invalido...");
	}

	valorProdutos = preco*quantidade;

	if (sobremesa == 1) {
		valorSobremesa = 8.00;
	}

	float total = valorProdutos + valorSobremesa;

	if (total > 100) {	

		desconto = 10;

		valorFinal = total - (total*desconto)/100;

	}

	else if ((total >= 50) && (total <= 100)) { 
		desconto = 5;

		valorFinal = total - (total*desconto)/100;
	} 

	else {
		valorFinal = total;
	}

	printf("\n=== Total do pedido ===\n");
	printf("Produto escolhido: %s\n", produto);
	printf("Quantidade: %d\n", quantidade);
	printf("Valor dos produtos: %2.f\n", valorProdutos);
	printf("valor da sobremesa: %2.f\n", valorSobremesa);
	printf("Desconto: %2.f%\n", desconto);
	printf("Valor final do pedido: %2.f\n", valorFinal);

	return 0;
}