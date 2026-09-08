#include <stdio.h>

int main()
{

    char nomeProduto[21] = "";
    int opcao, quantEstoque = 0, totalCadastrados = 0;
    float precoUnitario = 0.0f, valorEstoque;

    do
    {
        printf("===== SUPERMERCADO =====\n1 - Adicionar produto\n2 - Listar produtos\n3 - Calcular valor total do estoque\n4 - Sair\n");
        printf("Digite uma opcao: \n");
        scanf("%d", &opcao);

        switch (opcao)
        {

        // Caso 1: Cadastrar produtos
        case 1:
            printf("Digite o nome do produto: \n");
            scanf("%s", nomeProduto);

            printf("Digite a quantidade em estoque: \n");
            scanf("%d", &quantEstoque);

            if (quantEstoque < 0)
            {
                printf("quantidade invalida, por favor tente novamente \n");
                continue;
            }

            printf("Digite o preço da unidade: ");
            scanf("%f", &precoUnitario);

            if (precoUnitario <= 0)
            {
                printf("Preço invalido, tente novamente: \n");
                continue;
            }

            totalCadastrados++;

            printf("Produto cadastrado com sucesso!\n");
            break;

        // Caso 2: Listar Produtos
        case 2:
            if (totalCadastrados == 0)
            {
                printf("Nenhum produto cadastrado.");
            }

            else
            {
                for (int i = 0; i < totalCadastrados; i++)
                {
                    printf("-");
                }

                printf("\n");

                printf("Listagem de produtos:\nNome:%s\nQuantidade:%d\nPreço: R$ %.2f\n", nomeProduto, quantEstoque, precoUnitario);
            }
            break;

        // Caso 3: Calcular valor do estoque
        case 3:
            if (totalCadastrados == 0)
            {
                printf("Nenhum produto cadastrado");
            }

            else
            {
                valorEstoque = quantEstoque * precoUnitario;
                printf("Valor do estoque: R$%.2f\n", valorEstoque);
            }

            break;

        // Caso 4: Sair
        case 4:
            printf("\nEncerrando programa\n");
            break;

        // Caso nem um corresponda
        default:
            printf("Opção, invalida!\n");
            continue;
        };
    } while (opcao != 4);
    return 0;
}