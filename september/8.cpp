#include <stdio.h>
#include <locale.h>
#include "8.h"

int main (){
	
	setlocale(LC_ALL, "portuguese");
	
	float b, e, resultado;
	
	printf("Digite um número: ");
	scanf("%f",&b);
	printf("Digite um expoente: ");
	scanf("%f",&e);
	resultado = potencia(b,e);
	printf("%.2f",resultado);
}
