#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    char operador;
    float conta, n1, n2;

    printf("Digite um operador: ");
    scanf("%c", &operador);
    printf("Digite o primeiro n�mero: ");
    scanf("%f", &n1);
    printf("Digite o segundo n�mero: ");
    scanf("%f", &n2);

    switch (operador)
    {
    case '+':
        conta = n1 + n2;
        printf("O resultado de %.2f + %.2f �: %.2f\n\n", n1, n2, conta);
        break;
    case '-':
        conta = n1 - n2;
        printf("O resultado de %.2f - %.2f �: %.2f\n\n", n1, n2, conta);
        break;
    case '*':;
    case 'X':;
    case 'x':;
    case '.':
        conta = n1 * n2;
        printf("O resultado de %.2f * %.2f �: %.2f\n\n", n1, n2, conta);
        break;
    case '/':
        if (n2 == 0)
        {
            printf("N�o h� divis�o por zero\n\n");
            break;
        }
        else
        {
            conta = n1 / n2;
            printf("O resultado de %.2f / %.2f �: %.2f\n\n", n1, n2, conta);
            break;
        }
    default:
        printf("Operador inv�lido\n\n");
    }
    system("pause");
}
