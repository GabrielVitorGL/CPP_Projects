#include <stdio.h>
#include <locale.h>

int main (){
	
	setlocale(LC_ALL, "portuguese");
	
	int numero;

    printf("Digite uma op��o: ");
    scanf("%d", &numero);
    
    switch (numero)
    {
    case 1:
    	float n1, n2;
    	printf("Digite o primeiro n�mero: ");
    	scanf("%f",&n1);
    	printf("Digite o segundo n�mero: ");
    	scanf("%f",&n2);
    	break;
    case 2:
