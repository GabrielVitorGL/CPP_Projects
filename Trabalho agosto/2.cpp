#include <stdio.h>
#include <locale.h>

int main (){
	
	setlocale(LC_ALL, "portuguese");
	
	float totalnum, med, numeroslidos, pares, totalpares, medp;
	int num;
		printf("Para parar a leitura de n�meros digite '0'\n");
	do{
		printf("Digite um n�mero positivo: ");
		scanf("%d",&num);
		while(num<0){
		printf("Por favor, digite um n�mero positivo!: ");
		scanf("%d",&num);
		}
		numeroslidos = numeroslidos + 1;
		totalnum = totalnum + num;
    	if ((num % 2) == 0){
    		totalpares = totalpares + num;
    		pares = pares + 1;
		}
	} while(num != 0);
	medp = totalpares/(pares-1);
	med = totalnum/(numeroslidos-1);
	printf("A quantidade de n�meros pares que voc� digitou foi: %.0f\n",pares-1);
	printf("A quantidade de n�meros �mpares que voc� digitou foi: %.0f\n",numeroslidos-pares);
	printf("A m�dia de valores pares �: %.2f\n",medp);
	printf("A m�dia total dos valores �: %.2f\n",med);
}
