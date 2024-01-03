#include <stdio.h>
#include <locale.h>

int main (){
	
	setlocale(LC_ALL, "portuguese");
	
	float num, totalnum, med, numeroslidos=0, positivos=0, negativos=0, percentualp, percentualn;
	char continuar;
	
	do{
		printf("Digite o número: ");
		scanf("%f",&num);
		totalnum = totalnum + num;
		numeroslidos = numeroslidos + 1;
		if (num < 0){
			negativos = negativos + 1;
		}
		else{
			positivos = positivos + 1;
		}
	printf("Você gostaria de continuar calculando? (s/n) ");
	scanf("%s",&continuar);
	} while(continuar == 's' || continuar == 'S');
	med = totalnum / numeroslidos;
	percentualp = (positivos/numeroslidos)*100;
	percentualn = (negativos/numeroslidos)*100;
	printf("A média dos seus números é: %.2f\n",med);
	printf("A quantidade de números positivos que você digitou foi: %.0f\n",positivos);
	printf("A quantidade de números negativos que você digitou foi: %.0f\n",negativos);
	printf("O percentual de números positivos é: %.0f%%\n",percentualp);
	printf("O percentual de números negativos é: %.0f%%",percentualn);	
}
