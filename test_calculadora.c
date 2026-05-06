#include <stdio.h>
#include <assert.h>

// declaração
int multiplicar(int a, int b);

int main() 
{
    // testes
    assert(multiplicar(2, 0) == 2 * 0);
    assert(multiplicar(3, 6) == 3 * 6);
    assert(multiplicar(42, 64) == 42 * 64);

    printf("Todos os testes passaram!\n");

    return 0;
}
