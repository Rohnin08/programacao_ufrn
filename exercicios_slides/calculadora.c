#include <stdio.h>

float somar(float a, float b)
{
    return a + b;
}

float subtrair(float a, float b)
{
    return a - b;
}

float multiplicar(float a, float b)
{
    return a * b;
}

float dividir(float a, float b)
{
    return a / b;
}

int menu()
{
    int i;

    do
    {
        printf("Escolha uma opcao: \n");
        printf("1 - Somar: \n");
        printf("2 - Subtrair: \n");
        printf("3 - Multiplicar: \n");
        printf("4 - Dividir: \n");
        printf("0 - Sair \n");
        scanf("%d", &i);

    } while ((i < 1) || (i > 5));
    return i;
}

int main()
{

    int opcao = menu();

    float n1 = 0, n2 = 0;

    do
    {
        switch (opcao)
        {
        case 1:
            printf("\nDigite os numeros:");
            scanf("%f", &n1);
            scanf("%f", &n2);

            printf("%f + %f = %f", n1, n2, somar(n1, n2));
            break;
        case 2:
            printf("\nDigite os números: ");
            scanf("%f", &n1);
            scanf("%f", &n2);

            printf("\n%f - %f = %f\n", n1, n2, subtrair(n1, n2));
            break;
        case 3:
            printf("\nDigite os números: ");
            scanf("%f", &n1);
            scanf("%f", &n2);

            printf("%f x %f = %f\n", n1, n2, multiplicar(n1, n2));
            break;
        case 4:
            printf("Digite os números: \n");
            scanf("%f", &n1);
            scanf("%f", &n2);

            printf("%f / %f = %f\n", n1, n2, dividir(n1, n2));
            break;
        case 0:
            printf("Saindo...");
            break;
        }
    } while (opcao != 0);

    return 0;
}