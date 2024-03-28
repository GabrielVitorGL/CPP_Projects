#include <stdio.h>

int main()
{
    int n1, n2, adicao, subtracao, multiplicacao, divisao, resto;
    float divisaoDecimal;

    printf("Digite o primeiro número: ");
    scanf("%d", &n1);

    printf("Digite o segundo número: ");
    scanf("%d", &n2);

    adicao = n1 + n2;
    subtracao = n1 - n2;
    multiplicacao = n1 * n2;

    printf("\nAdição: %d \nSubtração: %d \nMultiplicação: %d \n", adicao, subtracao, multiplicacao);

    if (n2 != 0) {
        divisao = n1 / n2;
        resto = n1 % n2;
        divisaoDecimal = (float)n1 / (float)n2;
        printf("Divisão: %d \nResto: %d \nDivisão com decimal: %f", divisao, resto, divisaoDecimal);
        return 0;
    }

    printf("Divisão impossível");
    return 0;
}


