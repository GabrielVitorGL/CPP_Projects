#include <stdio.h>
#include <locale.h>

int main (){
	
	setlocale(LC_ALL, "portuguese");
	
	int vet1[6], vet2[6], vet3[12], i;
	
	//Zerar os dois vetores
	for (i=0; i<6; i++){
		vet1[i] = 0;
		vet2[i] = 0;
	}
	
	//Ler o vetor 1
	printf("Digite 6 números PARES para serem armazenados no vetor #1\n");
	for (i=0; i<6; i++){
		do{
			printf("v[%d] = ",i);
			scanf("%d",&vet1[i]);
			if (vet1[i]%2==1)
				printf("Por favor, digite um número PAR\n");
		}while (vet1[i]%2==1);
	}
	
	//Ler o vetor 2
	printf("\nDigite 6 números ÍMPARES para serem armazenados no vetor #2\n");
	for (i=0; i<6; i++){
		do{
			printf("v[%d] = ",i);
			scanf("%d",&vet2[i]);
			if (vet2[i]%2==0)
				printf("Por favor, digite um número ÍMPAR\n");
		}while (vet2[i]%2==0);
	}
	
	//Juntar os dois vetores no vetor 3
	for (i=0; i<6; i++)
		vet3[i] = vet1[i];
	for (i=0; i<6; i++)
		vet3[i+6] = vet2[i];
		
	//Exibir o vetor 3
	printf("\nSeus dois vetores juntos ficaram: \n");
	for (i=0; i<12; i++)
		printf("v[%d] = %d\n",i,vet3[i]);
}
	
