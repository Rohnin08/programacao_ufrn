#include <stdio.h>

int main()
{

    int codigoVenda = 0, totalVendas = 0;
    float valorVenda = 0, valorTotal = 0;

    while (1)
    {
        printf("Digite o código do produto: ");
        scanf("%d", &codigoVenda);

        if (codigoVenda == -1)
        {
            printf("Operação encerrada");
            break;
        }

        printf("Digite o valor  da venda: ");
        scanf("%f", &valorVenda);

        if (valorVenda <= 0)
        {
            printf("Valor invalido! Por favor tente novamente");
            continue;
        }

        totalVendas += 1;

        valorTotal += valorVenda;
    }

    if (totalVendas == 0)
    {
        printf("Nenhuma venda registrada no dia");
    }

    else
    {
        printf("Total de vendas: %d\n", totalVendas);
        printf("Valor Arrecadado: R$ %.2f\n", valorTotal);
    }

    return 0;
}