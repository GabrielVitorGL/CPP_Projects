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
		printf("Digite o salário: ");
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
		printf("Você gostaria de continuar inserindo dados de mais habitantes? (s/n) ");
		scanf("%s",&continuar);
		} while(continuar == 's' || continuar == 'S');
	medsalario = totalsalario/loops;
	printf("A média de salários é: %.2f\n",medsalario);
	printf("A maior idade do grupo foi: %d\n",maioridade);
	printf("A menor idade do grupo foi: %d\n",menoridade);
	printf("A quantidade de mulheres com salário até R$100 foi: %d\n",ate100);
}


