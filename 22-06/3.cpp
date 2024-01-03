#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    float nota1;
    float nota2;
    float med;

    printf("Digite a primeira nota: ");
    scanf("%f",&nota1);
    printf("Digite a segunda nota: ");
    scanf("%f",&nota2);
	while (nota1<0 || nota1>10){
		printf("Nota invalida, digite a primeira nota: ");
		scanf("%f",&nota1);
	}
	while (nota2<0 || nota2>10){
		printf("Nota invalida, digite a segunda nota: ");
		scanf("%f",&nota2);
	}
    med = (nota1 + nota2)/2;
    if (med >=5)printf("Aprovado com média %.2f\n",med);
    else printf("Reprovado com média %.2f\n",med);
}

/*
Calcular a média de duas notas e verificar se está aprovado (media maior ou igual a 5) ou não.
    obs: Obrigar o usuário a digitar uma nota valida (entre 0 e 10)
    Entrada:
    Digite a primeira nota: 6
    Digite a segunda nota: 7
    Saída: Aprovado 6.5

    Entrada:
    Digite a primeira nota: 16
    Nota invalida, digite a primeira nota: -4
    Nota invalida, digite a primeira nota: 4
    Digite a segunda nota: 99
    Nota inválida, digite a segunda nota: 6

    Saída: Aprovado 5
*/
