#include <stdio.h>

int linhas = 15;

void exibirTriangulo () {
    for (int i = 0; i <= linhas * 2; i++) {
        if (i % 2 == 0) {
            for (int j = linhas * 2 - i; j >= 0; j--) {
                if (j % 2 == 0) {
                    printf(" ");
                }
            }
            for (int j = i; j >= 0; j--) {
                printf("#");
            }
            printf("\n");
        }
    }
}

void exibirRetangulo() {
    for (int i = linhas; i >= 0; i--) {
            for (int i = linhas; i >= 0; i--) {
                printf("#");
            }
        printf("\n");
    }
}

void exibirLosango() {
    for (int i = 0; i <= linhas; i++) {
        if (i % 2 == 0) {
            for (int j = linhas - i; j >= 0; j--) {
                if (j % 2 == 0) {
                    printf(" ");
                }
            }
            for (int j = i; j >= 0; j--) {
                printf("#");
            }
            printf("\n");
        }
    }

    for (int i = linhas + 1; i >= 0; i--) {
        if (i % 2 == 0) {
            for (int j = linhas - i; j >= 0; j--) {
                if (j % 2 == 0) {
                    printf(" ");
                }
            }
            for (int j = i; j >= 0; j--) {
                printf("#");
            }
            printf("\n");
        }
    }
}

void exibirCirculo() {
    int cont = 0;
    for (int i = 0; i <= linhas * 4; i++) {
        if (cont == 4 +  linhas - i / 10) {
            for (int j = linhas * 4 - i; j >= 0; j--) {
                if (j % 2 == 0) {
                    printf(" ");
                }
            }
            for (int j = i; j >= 0; j--) {
                printf("#");
            }
            cont = 0;
            printf("\n");
        }
        cont++;
    }

    cont = 0;

    printf("\n\n\n");

    for (int i = linhas; i >= 0; i--) {
        if (cont == 4) {
            for (int j = linhas - i; j >= 0; j--) {
                if (j % 2 == 0) {
                    printf(" ");
                }
            }
            for (int j = i; j >= 0; j--) {
                printf("#");
            }
            cont = 0;
            printf("\n");
        }
        cont++;
    }

}

int main(){
    int opcao = 0;

    printf("1 - Triângulo\n");
    printf("2 - Retângulo\n");
    printf("3 - Losango\n");
    printf("4 - Círculo\n");
    printf("Escolha uma forma para ser exibida: ");

    scanf("%d", &opcao);

    switch(opcao){
    case(1):
        exibirTriangulo();
        break;
    case(2):
        exibirRetangulo();
        break;
    case(3):
        exibirLosango();
        break;
    case(4):
        exibirCirculo();
        break;
    default:
        printf("Opção inválida");
    }

    return 0;
}
