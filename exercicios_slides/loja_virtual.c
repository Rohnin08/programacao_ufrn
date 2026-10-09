#include <stdio.h>

typedef enum
{
    Pendente,
    Processando,
    Enviado,
    Entregue,
    Cancelado
} EstadoPedido;

int main()
{
    int statusPedido = Pendente;

    switch (statusPedido)
    {
    case 0:
        statusPedido++;
        printf("Status do pedido: Pendente\n");

    case 1:
        statusPedido++;
        printf("Status do pedido: Processando\n");

    case 2:
        statusPedido++;
        printf("Status do pedido: Enviado\n");

    case 3:
        statusPedido++;
        printf("Status do pedido: entregue\n");

    case 4:
        statusPedido++;
        printf("Pedido cancelado😿");
    }

    return 0;
}