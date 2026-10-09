#include <stdio.h>

typedef enum
{
    SAIR,
    POUPANCA,
    CDB,
    TESOURO_SELIC
} Opcao;

typedef struct
{
    char nome[20];
    float taxa;
} Investimento;

void exibirMenu()
{
    printf("\n=== Escolha uma opcao ===\n");
    printf("1 - Poupanca\n");
    printf("2 - CDB\n");
    printf("3 - Tesouro Selic\n");
    printf("0 - Sair\n");
}

Investimento buscarInvestimento(Opcao opcao)
{
    Investimento inv;

    switch (opcao)
    {
    case POUPANCA:
        inv = (Investimento){"Poupanca", 0.005f};
        break;
    case CDB:
        inv = (Investimento){"CDB", 0.008f};
        break;
    default:
        inv = (Investimento){"Tesouro Selic", 0.0068f};
    }
    return inv;
}

float simularInvestimento(Investimento inv, int meses, float aporte)
{
    float saldo = 0;

    for (int i = 1; i <= meses; i++)
    {
        saldo = (saldo + aporte) * (1 + inv.taxa);
        printf("Saldo do mes %d: %.2f\n", i, saldo);
    }
    return saldo;
}

int main()
{
    int meses, opcao;
    float renda, percentual, aporte;

    printf("Assistente de Investimento\n");

    printf("Tempo do investimento (meses): ");
    scanf("%d", &meses);

    printf("Renda mensal: ");
    scanf("%f", &renda);

    printf("Percentual do aporte (ex: 0.10): ");
    scanf("%f", &percentual);

    aporte = renda * percentual;

    do
    {
        exibirMenu();
        printf("Opcao: ");
        scanf("%d", &opcao);

        if (opcao >= POUPANCA && opcao <= TESOURO_SELIC)
        {
            Investimento inv = buscarInvestimento(opcao);
            float saldo = simularInvestimento(inv, meses, aporte);

            printf("Valor final (%s): %.2f\n", inv.nome, saldo);
            printf("Montante total: %.2f\n", (renda - aporte) + saldo);
        }
        else if (opcao != SAIR)
        {
            printf("Opcao invalida!\n");
        }
    } while (opcao != SAIR);

    return 0;
}