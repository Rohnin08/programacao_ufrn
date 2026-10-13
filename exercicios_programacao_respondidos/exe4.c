#include <stdio.h>

struct ItemPedido
{
    char nome[30];
    int quantidade;
    float precoUnitario;
};

float calcularTotalPedido(struct ItemPedido itens[], int tamanho)
{
    float total = 0.0;

    for (int i = 0; i < tamanho; i++)
    {
        total += itens[i].quantidade * itens[i].precoUnitario;
    }

    return total;
}

int main(void)
{
    struct ItemPedido itens[3] = {
        {"Teclado", 2, 120.00},
        {"Mouse", 3, 50.00},
        {"Monitor", 1, 850.00}};

    printf("=== CARRINHO DE COMPRAS ===\n\n");

    for (int i = 0; i < 3; i++)
    {
        printf("Item: %s\n", itens[i].nome);
        printf("Quantidade: %d\n", itens[i].quantidade);
        printf("Preco unitario: R$ %.2f\n", itens[i].precoUnitario);
        printf("Subtotal: R$ %.2f\n\n",
               itens[i].quantidade * itens[i].precoUnitario);
    }

    float total = calcularTotalPedido(itens, 3);

    printf("Valor total da compra: R$ %.2f\n", total);

    return 0;
}