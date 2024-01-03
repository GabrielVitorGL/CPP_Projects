#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
    
    setlocale(LC_ALL, "portuguese");
	
	char comodo[5][30],continuar;
	float largura, comprimento, area, total;
	for( ; ; ) {
		printf("Digite o nome do cômodo: ");
		scanf("%s",comodo[0]);
		fflush(stdin);
		printf("Digite a largura do cômodo: ");
		scanf("%f",&largura);
		printf("Digite o comprimento do cômodo: ");
		scanf("%f",&comprimento);
		area = largura * comprimento;
		printf("A área do(a) %s é: %.2f\n",comodo[0],area);
		printf("Você gostaria de continuar calculando a área de sua residência? (s/n) ");
		scanf("%s",&continuar);
		total = total + area;
		if(continuar == 'n'){
			break;
		}
	}
	printf("A área total de sua residência é %.2f",total);
}
/*
Exercícios para a próxima aula:
Elabore o fluxograma e o programa em C que possibilite calcular a área total de uma residência (sala, cozinha, banheiro, quartos, etc). 
O programa deverá solicitar a entrada do nome , a largura e o comprimento de um determinado cômodo. Em seguida, deverá apresentar a 
área do comodo lido também uma mensagem solicitando do usuário a confirmação de continuar calculando novos cômodos. Caso o usuário responda 
“Não”, o programa deverá apresentar o valor total acumulado da área residencial.
*/
