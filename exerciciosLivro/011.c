#include <stdio.h>

int main()
{

    float G, R;

    const float Pi = 3.141592;

    printf("Digite um angulo em graus: ");
    scanf("%f", &G);

    R = G * (Pi / 180);

    printf("Valor em radianos: %f", R);

    return 0;
}