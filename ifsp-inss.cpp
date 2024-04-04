#include <stdio.h>

int main() {
    const float inss = 0.14;

    float salarioB, ir, descontos, salarioL;

    printf("Digite seu salário bruto: ");
    scanf("%f", &salarioB);

    if (salarioB > 7000.00) {
        ir = 0.10;
    } else {
        ir = 0.05;
    }

    descontos = inss + ir;

    salarioL = salarioB * (1 - descontos);

    printf("\nO desconto do INSS foi: %.2f\n", salarioB * inss);
    printf("O desconto do IR foi: %.2f\n", salarioB * ir);
    printf("O total de descontos foi: %.2f\n", salarioB - salarioL);

    printf("\033[31m"); // cor vermelha
    printf("\nSeu salário líquido é: R$ %.2f\n", salarioL);
    printf("\033[0m"); // cor padrão

    return 0;
}
