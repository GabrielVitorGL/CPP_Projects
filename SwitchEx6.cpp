#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int numero;

    printf("Digite os n�meros da placa de seu ve�culo para descobrir o dia do rod�zio: ");
    scanf("%d", &numero);
    switch (numero % 10)
    {
    case 1:;
    case 2:
        printf("Segunda-feira\n\n");
        break;
    case 3:;
    case 4:
        printf("Ter�a-feira\n\n");
        break;
    case 5:;
    case 6:
        printf("Quarta-feira\n\n");
        break;
    case 7:;
    case 8:
        printf("Quinta-feira\n\n");
        break;
    case 9:;
    case 0:
        printf("Sexta-feira\n\n");
        break;
    default:
        printf("N�mero inv�lido\n\n");
    }
    system("pause");
}
