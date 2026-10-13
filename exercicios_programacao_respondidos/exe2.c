#include <stdio.h>

// Calcula a porcentagem de racks ocupados na matriz 4x4
float calcularTaxaOcupacao(int matriz[4][4])
{
    int ocupados = 0;
    int total = 4 * 4;

    // Percorre todas as linhas da matriz
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (matriz[i][j] == 1)
            {
                ocupados++;
            }
        }
    }

    return (float)ocupados / total * 100;
}

// Conta quantos racks estão livres em uma linha específica
int contarRacksLIVRES(int matriz[4][4], int linha)
{
    int livres = 0;

    // Depois percorre todas as colunas da linha informada
    for (int j = 0; j < 4; j++)
    {
        if (matriz[linha][j] == 0)
        {
            livres++;
        }
    }
    // No final retorna a quantidade de racks livres
    return livres;
}

int main(void)
{
    /*
    Matriz de racks do data center
    0 = Livre | 1 = Ocupado
    */
    int servidores[4][4] = {
        {1, 0, 1, 1},
        {0, 0, 1, 0},
        {1, 1, 0, 1},
        {0, 1, 0, 0}};

    printf("=== DATA CENTER ===\n");
    printf("Disposicao dos racks (0 = Livre | 1 = Ocupado)\n\n");

    // Exibição da matriz em tela
    for (int i = 0; i < 4; i++)
    {
        printf("Fileira %d: ", i + 1);

        for (int j = 0; j < 4; j++)
        {
            printf("[%d] ", servidores[i][j]);
        }

        printf("\n");
    }

    // Chamada das funções para verificar a taxa de ocupação de todos os racks
    float taxa = calcularTaxaOcupacao(servidores);

    // everificação de quantos racks livre há na segunda fileira
    int racksLivres = contarRacksLIVRES(servidores, 1);

    // Exibe as informações obtidas pelas funções;
    printf("\nTaxa de ocupacao: %.2f%%\n", taxa);
    printf("Racks livres na Fileira 2: %d\n", racksLivres);

    return 0;
}