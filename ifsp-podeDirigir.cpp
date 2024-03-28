#include <stdio.h>

int obterIdade() {
    int idade = 0;

    printf("digite sua idade: ");
    scanf("%d", &idade);

    return idade;
}

bool podeDirigir(int idade) {
    if (idade >= 18)
        return true;
    return false;
}

void exibirMensagem(int idade) {
    if (podeDirigir(idade)){
        printf("Pode dirigir");
        return;
    }

    printf("Não pode dirigir");
}

int main()
{
    int idade = obterIdade();

    exibirMensagem(idade);

    return 0;
}


