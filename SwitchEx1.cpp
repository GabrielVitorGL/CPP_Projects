#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int numero;

    printf("Digite um número para descobrir a qual dia da semana ele corresponde: ");
    scanf("%d", &numero);

    switch (numero)
    {
    case 1:
        printf("Domingo\n\n");
        break;

    case 2:
        printf("Segunda-Feira\n\n");
        break;

    case 3:
        printf("Terça-Feira\n\n");
        break;

    case 4:
        printf("Quarta-Feira\n\n");
        break;

    case 5:
        printf("Quinta-Feira\n\n");
        break;

    case 6:
        printf("Sexta-Feira\n\n");
        break;

    case 7:
        printf("Sábado\n\n");
        break;

    default:
        printf("Número invalido\n\n");
    }
    system("pause");
}
