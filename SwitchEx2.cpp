#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int numero;

    printf("Digite um n�mero para descobrir a qual dia m�s ele corresponde: ");
    scanf("%d", &numero);

    switch (numero)
    {
    case 1:
        printf("Janeiro\n\n");
        break;

    case 2:
        printf("Fevereiro\n\n");
        break;

    case 3:
        printf("Mar�o\n\n");
        break;

    case 4:
        printf("Abril\n\n");
        break;

    case 5:
        printf("Maio\n\n");
        break;

    case 6:
        printf("Junho\n\n");
        break;

    case 7:
        printf("Julho\n\n");
        break;

    case 8:
        printf("Agosto\n\n");
        break;

    case 9:
        printf("Setembro\n\n");
        break;

    case 10:
        printf("Outubro\n\n");
        break;

    case 11:
        printf("Novembro\n\n");
        break;

    case 12:
        printf("Dezembro\n\n");
        break;

    default:
        printf("N�mero invalido\n\n");
    }
    system("pause");
}
