#include <stdio.h>

int main()
{
    int N;

    printf("Qual o tamanho de N: ");
    scanf("%d", &N);

    for (int i = 0; i < N + 1; i++)
    {
        printf("%d\n", i);
    }

    return 0;
}