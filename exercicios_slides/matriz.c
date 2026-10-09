#include <stdio.h>

int main()
{

    int matriz[3][3];
    int soma = 0;

    printf("Digite os numeros da matriz 3x3: \n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Elemento[%d][%d]:", i, j);
            scanf("%d", &matriz[i][j]);

            soma += matriz[i][j];
        }
    }

    printf("%d", soma);
}