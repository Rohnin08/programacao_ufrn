#include <stdio.h>

int main()
{
    float media = 0, nota = 0, soma = 0;

    for (int i = 0; i < 4; i++)
    {

        printf("Nota: ");
        scanf("%f", &nota);
        soma += nota;
    }

    media = soma / 4;

    printf("%.1f", media);

    return 0;
}