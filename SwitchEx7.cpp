#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    float conta, n1, n2;
    int opcao, numero;
    char letra, operador, caractere;

    printf("1 - Dia da semana\n");
    printf("2 - M�s correspondente\n");
    printf("3 - Vogal ou consoante\n");
    printf("4 - Calculadora\n");
    printf("5 - Vogal ou n�o, Mai�scula ou n�o, caractere ou d�gito\n");
    printf("6 - Rod�zio\n");

    printf("\nDigite uma op��o: ");
    scanf("%d", &opcao);
    fflush(stdin);
    if (opcao >= 1 && opcao <= 6)
    {

        switch (opcao)
        {
        case 1:
            printf("Digite um n�mero para descobrir a qual dia da semana ele corresponde: ");
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
                printf("Ter�a-Feira\n\n");
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
                printf("S�bado\n\n");
                break;
            default:
                printf("N�mero invalido\n\n");
                break;
            }
            break;
        case 2:
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
                break;
            }
            break;
        case 3:
            printf("Digite uma letra para descobrir se � vogal ou consoante: ");
            scanf("%c", &letra);

            switch (letra)
            {
            case 'a':; case 'A':; case 'e':; case 'E':; case 'i':; case 'I':; case 'o':; case 'O':; case 'u':; 
            case 'U': 
                 printf("Vogal\n\n"); 
                 break;
            case 'b':; case 'B':; case 'c':; case 'C':; case 'd':; case 'D':; case 'f':; case 'F':; case 'g':; case 'G':; case 'h':; case 'H':; case 'j':; case 'J':; case 'k':; case 'K':;case 'l':; case 'L':; case 'm':; case 'M':; case 'n':; case 'N':; case 'p':; case 'P':; case 'q':; case 'Q':; case 'r':; case 'R':; case 's':; case 'S':; case 't':; case 'T':; case 'v':; case 'V':; case 'w':; case 'W':; case 'x':; case 'X':; case 'y':; case 'Y':; case 'z':;
            case 'Z': 
                 printf("Consoante\n\n"); 
                 break;
            default: printf("N�o � uma letra\n\n"); break;
            }
            break;
        case 4:
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
                break;
            }
            break;
        case 5:
            printf("Digite uma caractere para descobrir se � vogal (Mai�scula ou min�scula), consoante (Mai�scula ou min�scula), d�gito ou caractere especial: ");
            scanf("%c", &caractere);

            switch (caractere)
            {
            case 'a':; case 'e':; case 'i':; case 'o':; 
            case 'u': 
                 printf("Vogal min�scula\n\n"); 
                 break;
            case 'A':; case 'E':; case 'I':; case 'O':;
            case 'U': 
                 printf("Vogal mai�scula\n\n"); 
                 break;
            case 'b':; case 'c':; case 'd':; case 'f':; case 'g':; case 'h':; case 'j':; case 'k':; case 'l':; case 'm':; case 'n':; case 'p':; case 'q':; case 'r':; case 's':; case 't':; case 'v':; case 'w':; case 'x':; case 'y':;
            case 'z': 
                 printf("Consoante min�scula\n\n"); 
                 break;
            case 'B':; case 'C':; case 'D':; case 'F':; case 'G':; case 'H':; case 'J':; case 'K':; case 'L':; case 'M':; case 'N':; case 'P':; case 'Q':; case 'R':; case 'S':; case 'T':; case 'V':; case 'W':; case 'X':; case 'Y':;
            case 'Z': 
                 printf("Consoante mai�scula\n\n"); 
                 break;
            case '0':; case '1':; case '2':; case '3':; case '4':; case '5':; case '6':; case '7':; case '8':;
            case '9':
                printf("D�gito\n\n");
                break;
            default:
                printf("Caractere especial\n\n");
                break;
            }
            break;
        case 6:
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
                break;
            }
        default:
            printf("Op��o invalida");
        }
    }
    system("pause");
}
