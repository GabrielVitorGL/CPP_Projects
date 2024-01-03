#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int cpf[10], l, cpf_mult[10], prim_dig, seg_dig;
	
	printf("Digite o cpf para calcularmos os dígitos de controle (sem . ou -)\n");
	for (l=0; l<9; l++){
		printf("%dº digíto: ",l+1);
		scanf("%d",&cpf[l]);
	}

	int temp = 10;
	for (l=0; l<9; l++){
		cpf_mult[l] = cpf[l] * temp;
		temp--;
	}
	
	temp = 0;
	for (int l=0; l<9; l++){
		temp = temp + cpf_mult[l];
	}
	int resto;
	resto = temp%11;

	if (resto<2)
		cpf[9] = 0;
	else
		cpf[9] = 11-resto;
	
	temp = 11;
	for (l=0; l<10; l++){
		cpf_mult[l] = cpf[l] * temp;
		temp--;
	}
	
	temp = 0;
	for (int l=0; l<10; l++){
		temp = temp + cpf_mult[l];
	}
	resto = temp%11;
	if (resto<2)
		cpf[10] = 0;
	else
		cpf[10] = 11-resto;
		
	printf("Os dígitos verificadores do seu cpf são: %d e %d\n",cpf[9],cpf[10]);
	printf("Logo, seu cpf ficou: ");
	temp=0;
	for (int l=0; l<11; l++){
		printf("%d",cpf[l]);
		temp++;
		if(temp==3||temp==6){
			printf(".");
		}
		else if(temp==9){
			printf("-");
		}
	}
}
