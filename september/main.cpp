#include <stdio.h>
#include <locale.h>

int main (){
	
	setlocale(LC_ALL, "portuguese");
	
	int numero;

    printf("Digite uma opção: ");
    scanf("%d", &numero);
    
    switch (numero)
    {
    case 1:
    	float n1, n2;
    	printf("Digite o primeiro número: ");
    	scanf("%f",&n1);
    	printf("Digite o segundo número: ");
    	scanf("%f",&n2);
    	break;
    case 2:
