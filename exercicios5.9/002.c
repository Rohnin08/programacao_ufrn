#include <stdio.h>

int main()
{
    int N;

    printf("Digite o valor de N: ");
    scanf("%d", &N);

    for (int i = N; i >= 0; i -= 1)
    {
        printf("%d\n", i);
    }

    return 0;
}