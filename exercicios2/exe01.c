#include <stdio.h> // Pacote de funções

int main()
{
    // Iniciação, contadores definidos com 0
    int codigoVenda, totalVendas = 0;
    float valorVenda, valorTotal = 0;

    // Optei por colocar um menu mais amigavel 🐱
    printf("=== CONTROLE DE VENDAS DE UMA LANCHONETE ===\n");
    printf("01 - Sanduiche\n02 - Refrigerante\n03 - Batata Frita\n04 - Café\n05 - Pastel\n06 - Coxinha\n07 - Esfirra\n");

    while (1) // while true
    {
        printf("\nDigite o código do produto:");
        scanf("%d", &codigoVenda);

        // Tratamento que verifica se o número bate com o da lista, excluindo a condição de parada e ignora o código errado.
        if (codigoVenda != -1 && (codigoVenda < 1 || codigoVenda > 7))
        {
            printf("Código inválido!\n");
            continue;
        }

        // Se for -1 ele para
        if (codigoVenda == -1)
        {
            printf("\nOperação encerrada:");
            break;
        }

        printf("\nDigite o valor  da venda:");
        scanf("%f", &valorVenda);

        // Não permite que o valor da venda seja 0 ou negativo
        if (valorVenda <= 0)
        {
            printf("Valor invalido! Venda ignorada\n");
            continue;
        }

        // A cada operação ele computa uma venda
        totalVendas++;

        // Soma o valor de todas as vendas
        valorTotal += valorVenda;
    }

    // Verifica se o total de venda é zero
    if (totalVendas == 0)
    {
        printf("Nenhuma venda registrada no dia\n");
    }

    // Se for maior que zero, exibe o relatorio
    else
    {
        printf("Total de vendas: %d\n", totalVendas);
        printf("Valor Arrecadado: R$ %.2f\n", valorTotal);
        printf("Valor Médio: %.2f", valorTotal / totalVendas);
    }

    return 0; // Se não botar o código quebra
}