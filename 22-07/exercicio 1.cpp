#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
    
    setlocale(LC_ALL, "portuguese");
	
	char comodo[5][30],continuar;
	float largura, comprimento, area, total;
	for( ; ; ) {
		printf("Digite o nome do c�modo: ");
		scanf("%s",comodo[0]);
		fflush(stdin);
		printf("Digite a largura do c�modo: ");
		scanf("%f",&largura);
		printf("Digite o comprimento do c�modo: ");
		scanf("%f",&comprimento);
		area = largura * comprimento;
		printf("A �rea do(a) %s �: %.2f\n",comodo[0],area);
		printf("Voc� gostaria de continuar calculando a �rea de sua resid�ncia? (s/n) ");
		scanf("%s",&continuar);
		total = total + area;
		if(continuar == 'n'){
			break;
		}
	}
	printf("A �rea total de sua resid�ncia � %.2f",total);
}
/*
Exerc�cios para a pr�xima aula:
Elabore o fluxograma e o programa em C que possibilite calcular a �rea total de uma resid�ncia (sala, cozinha, banheiro, quartos, etc). 
O programa dever� solicitar a entrada do nome , a largura e o comprimento de um determinado c�modo. Em seguida, dever� apresentar a 
�rea do comodo lido tamb�m uma mensagem solicitando do usu�rio a confirma��o de continuar calculando novos c�modos. Caso o usu�rio responda 
�N�o�, o programa dever� apresentar o valor total acumulado da �rea residencial.
*/
