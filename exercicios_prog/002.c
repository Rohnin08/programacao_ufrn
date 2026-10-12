#include <stdio.h>

#define TAM 6

int verificarBloqueio(int vetor[], int tamanho)
{
    int falhasConsecutivas = 0; // Variavel para contar o número de ocorrencias consecutivas de um valor de falhas

    for (int i = 0; i < tamanho; i++)
    {
        if (vetor[i] == 0) // Verifica se os itens da
        {
            falhasConsecutivas++;
            if (falhasConsecutivas >= 3)
                ;

            return 1;
        }

        else
        {
            falhasConsecutivas = 0;
        }

        return 0;
    }
}

int main()
{

    int tentativas[TAM] = {1, 0, 0, 0, 1, 0};

    printf("=== Tentativas registradas ===\n");
    for (int i = 0; i < TAM; i++)
    {
        printf("Tentativa[%d]: %d\n", i + 1, tentativas[i]);
    }

    int bloqueio = verificarBloqueio(tentativas, TAM);

    if (bloqueio = 1)
    {
        printf("ALERTA: IP Bloqueado por Forca Bruta!");
    }

    else
    {
        printf("Acesso Normal");
    }

    return 0;
}