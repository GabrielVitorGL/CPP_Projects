#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    char caractere;

    printf("Digite uma caractere para descobrir se � vogal (Mai�scula ou min�scula), consoante (Mai�scula ou min�scula), d�gito ou caractere especial: ");
    scanf("%c", &caractere);

    switch (caractere)
    {
    case 'a':;
    case 'e':;
    case 'i':;
    case 'o':;
    case 'u':
        printf("Vogal min�scula\n\n");
        break;
    case 'A':;
    case 'E':;
    case 'I':;
    case 'O':;
    case 'U':
        printf("Vogal mai�scula\n\n");
        break;
    case 'b':;
    case 'c':;
    case 'd':;
    case 'f':;
    case 'g':;
    case 'h':;
    case 'j':;
    case 'k':;
    case 'l':;
    case 'm':;
    case 'n':;
    case 'p':;
    case 'q':;
    case 'r':;
    case 's':;
    case 't':;
    case 'v':;
    case 'w':;
    case 'x':;
    case 'y':;
    case 'z':
        printf("Consoante min�scula\n\n");
        break;
    case 'B':;
    case 'C':;
    case 'D':;
    case 'F':;
    case 'G':;
    case 'H':;
    case 'J':;
    case 'K':;
    case 'L':;
    case 'M':;
    case 'N':;
    case 'P':;
    case 'Q':;
    case 'R':;
    case 'S':;
    case 'T':;
    case 'V':;
    case 'W':;
    case 'X':;
    case 'Y':;
    case 'Z':
        printf("Consoante mai�scula\n\n");
        break;
    case '0':;
    case '1':;
    case '2':;
    case '3':;
    case '4':;
    case '5':;
    case '6':;
    case '7':;
    case '8':;
    case '9':
        printf("D�gito\n\n");
        break;
    default:
        printf("Caractere especial\n\n");
    }
    system("pause");
}
