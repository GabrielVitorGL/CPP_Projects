#include <stdio.h>
#include <locale.h>
#include "6.h"

int main (){
	
	setlocale(LC_ALL, "portuguese");
	
	int n,f;
	
	printf("Digite um número para descobrir seu fatorial: ");
	scanf("%d",&n);
	f = calcular_fatorial(n);
	printf("%d",f);
}
	
	
