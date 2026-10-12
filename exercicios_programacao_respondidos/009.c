
#include <stdio.h>

long long calcularFaturamentoTotal(int quantidade, int precoUnitario)
{
    return (long long)quantidade * precoUnitario;
}

int main(void)
{
    int quantidade = 500000;
    int precoUnitario = 1000;

    printf("Quantidade: %d\n", quantidade);
    printf("Preco unitario: R$ %d\n", precoUnitario);

    long long total = calcularFaturamentoTotal(quantidade, precoUnitario);

    printf("Faturamento total: R$ %lld\n", total);

    return 0;
}