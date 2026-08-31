#include <stdio.h>

int main() {
	int ano;

	printf("=== VERIFICADOR DE ANO BISSEXTO ===\n");

	printf("DIGITE UM ANO: ");
	scanf("%d", &ano);


	// Verifica se é bissexto ou não.
	if ((((ano& 3) == 0) && (ano % 100 !=0)) || (ano % 400 == 0) ) {
		printf("ANO BISSEXTO");
	}

	else {
		printf("NAO E ANO BISSEXTO");
	}

	return 0;
}