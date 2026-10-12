
#include <stdio.h>

float calcularTaxaOcupacao(int matriz[4][4])
{
    int ocupados = 0;
    int total = 4 * 4;

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

int contarRacksLIVRES(int matriz[4][4], int linha)
{
    int livres = 0;

    for (int j = 0; j < 4; j++)
    {
        if (matriz[linha][j] == 0)
        {
            livres++;
        }
    }

    return livres;
}

int main(void)
{
    int servidores[4][4] = {
        {1, 0, 1, 1},
        {0, 0, 1, 0},
        {1, 1, 0, 1},
        {0, 1, 0, 0}};

    printf("=== DATA CENTER ===\n");
    printf("Disposicao dos racks (0 = Livre | 1 = Ocupado)\n\n");

    for (int i = 0; i < 4; i++)
    {
        printf("Fileira %d: ", i + 1);

        for (int j = 0; j < 4; j++)
        {
            printf("[%d] ", servidores[i][j]);
        }

        printf("\n");
    }

    float taxa = calcularTaxaOcupacao(servidores);
    int racksLivres = contarRacksLIVRES(servidores, 1);

    printf("\nTaxa de ocupacao: %.2f%%\n", taxa);
    printf("Racks livres na Fileira 2: %d\n", racksLivres);

    return 0;
}