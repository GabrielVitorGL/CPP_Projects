#include <stdio.h>
#include <locale.h>

int main (){
	
	setlocale(LC_ALL, "portuguese");
	
	float salario, totalsalario, medsalario;
	int idade, maioridade, menoridade=9999, ate100, loops;
	char continuar, sexo;
	
	do{
		printf("Digite a idade: ");
		scanf("%d",&idade);
		printf("Digite o sexo ('m' para masculino e 'f' para feminino): ");
		scanf("%s",&sexo);
		printf("Digite o sal�rio: ");
		scanf("%f",&salario);
		totalsalario = totalsalario + salario;
		if(idade>=maioridade){
			maioridade = idade;
		}
		if(idade<=menoridade){
			menoridade = idade;
		}
		if((sexo=='F' || sexo=='f') && salario<=100){
			ate100 = ate100 + 1;
		}
		loops = loops + 1;
		printf("Voc� gostaria de continuar inserindo dados de mais habitantes? (s/n) ");
		scanf("%s",&continuar);
		} while(continuar == 's' || continuar == 'S');
	medsalario = totalsalario/loops;
	printf("A m�dia de sal�rios �: %.2f\n",medsalario);
	printf("A maior idade do grupo foi: %d\n",maioridade);
	printf("A menor idade do grupo foi: %d\n",menoridade);
	printf("A quantidade de mulheres com sal�rio at� R$100 foi: %d\n",ate100);
}


