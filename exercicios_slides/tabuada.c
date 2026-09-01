#include <stdio.h>

int main()
{
    int fator1, fator2, produto;

    for (int i = 1; i <= 10; i++)
    {
        printf("\nTabuada do %d\n", i);

        fator1 = i;
        for (int j = 1; j <= 10; j++)
        {
            fator2 = j;
            produto = i * j;
            printf("%d x %d = %d\n", fator1, fator2, produto);
        }
    }

    return 0;
}
