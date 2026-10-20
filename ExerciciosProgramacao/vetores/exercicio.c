#include <stdio.h>

float calcularMedia(float vetor[], int tam)
/*Função para calcular a média aritimetica dos elementos de uma lista*/
{
    float soma = 0;
    for (int i = 0; i < tam; i++)
    {
        soma += vetor[i];
    }

    float media = soma / tam;

    return media;
}

float encontrarMaior(float vetor[], int tam)
/*Função para encontrar o maior valor dentre os elementos de uma lista*/
{
    float maiorNota = 0;
    for (int i = 0; i < tam; i++)
    {
        if (maiorNota < vetor[i])
        {
            maiorNota = vetor[i];
        }
    }

    return maiorNota;
}

float encontrarMenor(float vetor[], int tam)
/*Função para encontrar o menor valor dentre os elementos de uma lista*/
{
    float menorNota = 0;
    for (int i = 0; i < tam; i++)
    {
        if (menorNota == 0) {
            menorNota = vetor[i];
        }

        if (menorNota > vetor[i])
        {
            menorNota = vetor[i];
        }
    }

    return menorNota;
}


int main()
{
    int tam;

    do
    {
        printf("Digite o tamanho da lista:");
        scanf("%d", &tam);

    } while (tam <= 0);

    float notas[tam];
    float item_lista;

    // Prenxer a lista
    for (int i = 0; i < tam; i++)
    {
        printf("Digite os valores da lista: ");
        scanf("%f", &item_lista);

        if (notas)

            notas[i] = item_lista;
    }

    // Exibir lista
    for (int i = 0; i < tam; i++)
    {
        printf("nota[%d]: %.2f\n", i + 1, notas[i]);
    }

    float media = calcularMedia(notas, tam);

    float maiorNota = encontrarMaior(notas, tam);

    float menorNota = encontrarMenor(notas, tam);

    printf("Media aritimetica das notas: %.1f\nMaior Nota: %.1f\nMenor Nota: %.1f", media, maiorNota, menorNota);

    return 0;
}