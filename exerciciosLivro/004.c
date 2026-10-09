#include <stdio.h>

int main()
{
    int n;

    printf("Digite um número: ");
    scanf("%d", &n);

    printf("Numero: %d, Antecessor: %d, Sucessor: %d", n, n - 1, n + 1);

    return 0;
}