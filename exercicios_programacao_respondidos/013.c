
#include <stdio.h>

struct ClienteSaaS
{
    int id;
    int limiteMensal;
    int requisicoesConsumidas;
    int bloqueado;
};

void verificarQuota(struct ClienteSaaS *cliente)
{
    if (cliente->requisicoesConsumidas > cliente->limiteMensal)
    {
        cliente->bloqueado = 1;
    }
}

int main(void)
{
    struct ClienteSaaS cliente = {1, 10000, 10500, 0};

    printf("=== DADOS DO CLIENTE ===\n");
    printf("ID: %d\n", cliente.id);
    printf("Limite mensal: %d requisicoes\n", cliente.limiteMensal);
    printf("Requisicoes consumidas: %d\n", cliente.requisicoesConsumidas);

    verificarQuota(&cliente);

    printf("\n=== STATUS DO ACESSO ===\n");

    if (cliente.bloqueado == 1)
    {
        printf("Acesso suspenso: limite mensal excedido.\n");
    }
    else
    {
        printf("Acesso liberado.\n");
    }

    return 0;
}