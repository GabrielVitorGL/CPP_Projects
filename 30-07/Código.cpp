#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	
	setlocale(LC_ALL, "portuguese");
	
	float num, totalnum;
	int numeroslidos;
	char continuar;
	
	printf("Digite os n�meros: ");
	do{
		scanf("%f",&num);
		totalnum = totalnum + num;
		
		inicial = base;
		expoente = expoente - 1;
		do{
			base = base * inicial;
			expoente = expoente - 1;
		}
		while(expoente != 0);
		printf("O resultado �: %.2f",base);
		printf("\nVoc� gostaria de continuar calculando? (s/n) ");
		scanf("%s",&continuar);
	} while(continuar == 's');
}
/*
Dada a base e o expoente, calcular a pot�ncia (Fazer com o repita). 
Depois de mostrar a pot�ncia, perguntar se o usu�rio quer continuar 
ou n�o (usem 1 ou 0 | S ou N)
*/
