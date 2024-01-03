#include <stdio.h>
#include <locale.h>

int main (){
	
	setlocale(LC_ALL, "portuguese");
	
	int cont, sexo;
	float altura, maioraltura, menoraltura=9999, totalaltura, totalalturafeminina, numeromulheres;

	for (cont=1; cont<=50; cont++){
		printf("Digite a altura: ");
		scanf("%f",&altura);
		printf("Digite o sexo (1 = masculino, 2 = feminino): ");
		scanf("%d",&sexo);
		totalaltura = totalaltura + altura;
		if(altura>=maioraltura){
			maioraltura = altura;
		}
		if(altura<=menoraltura){
			menoraltura = altura;
		}
		if(sexo==2){
			totalalturafeminina = totalalturafeminina + altura;
			numeromulheres = numeromulheres + 1;
		}
		printf("\n");
	}
	printf("A maior altura foi: %.2f\n",maioraltura);
	printf("A menor altura foi: %.2f\n",menoraltura);
	printf("A média de altura das mulhers foi: %.2f\n",totalalturafeminina/numeromulheres);
	printf("A média de altura geral foi: %.2f\n",totalaltura/50);
}
