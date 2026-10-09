#include <stdio.h>

int main()
{

    float temperatura = 10.5;

    float *p = &temperatura;

    *p = 11.5;

    printf("Temperatura  é: %f\n", temperatura);
    printf("Temperatura é %f\n", *p);
}