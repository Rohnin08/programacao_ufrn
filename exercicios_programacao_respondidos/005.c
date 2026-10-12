
#include <stdio.h>
#include <stdint.h>

union CacheVal
{
    uint32_t contadorAcessos;
    float percentualUso;
};

void atualizarCacheParaFloat(union CacheVal *cache, float valor)
{
    cache->percentualUso = valor;
}

int main(void)
{
    union CacheVal cache;

    cache.contadorAcessos = 15000;

    printf("=== CACHE ANTES DA ATUALIZACAO ===\n");
    printf("Contador de acessos: %u\n", cache.contadorAcessos);

    atualizarCacheParaFloat(&cache, 88.5f);

    printf("\n=== CACHE DEPOIS DA ATUALIZACAO ===\n");
    printf("Percentual de uso: %.2f%%\n", cache.percentualUso);

    printf("\nMemoria consumida: %zu bytes\n", sizeof(cache));

    return 0;
}