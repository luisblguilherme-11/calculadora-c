#include <stdio.h>

// declaração da função
int multiplicar(int a, int b);

int main() 

{
    int opcao;
    int num1, num2;
    char continuar;

    do {
        printf("\n=== Calculadora ===\n");
        printf("1 - Soma\n");
        printf("2 - Subtracao\n");
        printf("3 - Divisao\n");
        printf("4 - Multiplicacao\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 4) {
            printf("Digite dois numeros: ");
            scanf("%d %d", &num1, &num2);

            int resultado = multiplicar(num1, num2);
            printf("Resultado: %d\n", resultado);
        } else {
            printf("Opcao indisponivel\n");
        }

        printf("Deseja continuar? (s/n): ");
        scanf(" %c", &continuar);

    } while (continuar == 's' || continuar == 'S');

    return 0;
}
