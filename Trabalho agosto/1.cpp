#include <stdio.h>
#include <locale.h>

int main (){
	
	setlocale(LC_ALL, "portuguese");
	
	float num, totalnum, med, numeroslidos=0, positivos=0, negativos=0, percentualp, percentualn;
	char continuar;
	
	do{
		printf("Digite o n�mero: ");
		scanf("%f",&num);
		totalnum = totalnum + num;
		numeroslidos = numeroslidos + 1;
		if (num < 0){
			negativos = negativos + 1;
		}
		else{
			positivos = positivos + 1;
		}
	printf("Voc� gostaria de continuar calculando? (s/n) ");
	scanf("%s",&continuar);
	} while(continuar == 's' || continuar == 'S');
	med = totalnum / numeroslidos;
	percentualp = (positivos/numeroslidos)*100;
	percentualn = (negativos/numeroslidos)*100;
	printf("A m�dia dos seus n�meros �: %.2f\n",med);
	printf("A quantidade de n�meros positivos que voc� digitou foi: %.0f\n",positivos);
	printf("A quantidade de n�meros negativos que voc� digitou foi: %.0f\n",negativos);
	printf("O percentual de n�meros positivos �: %.0f%%\n",percentualp);
	printf("O percentual de n�meros negativos �: %.0f%%",percentualn);	
}
