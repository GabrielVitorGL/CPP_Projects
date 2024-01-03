#include <stdio.h>
#include <locale.h>
#define ELEMENTOS 10

int main (){
	
	setlocale(LC_ALL, "portuguese");
	
	int vet[ELEMENTOS], i, soma=0, soma_pares=0, indices_imp, negativos, maior_valor=-9999, menor_valor=9999, ind_men_val, vet_ord[ELEMENTOS], temp;
	
	//1 - Zerar o vetor
	for (i=0; i<ELEMENTOS; i++)
		vet[i] = 0;
		
	//2 - Ler o vetor	
	printf("Digite 10 d�gitos para serem armazenados no seu vetor\n");
	for (i=0; i<ELEMENTOS; i++){
		printf("v[%d] = ",i);
		scanf("%d",&vet[i]);
	}
	
	// 3 - Exibir o vetor
	printf("\nO vetor que voc� digitou foi: \n");
	for (i=0; i<ELEMENTOS; i++)
		printf("v[%d] = %d\n",i,vet[i]);
		
	// 4 - Exibir a soma dos elementos do vetor
	for (i=0; i<ELEMENTOS; i++)
		soma = soma + vet[i];
	printf("\nA soma dos elementos do seu vetor �: %d\n",soma);
	
	// 5 - Exibir o vetor de tr�s pra frente
	printf("\nO vetor de tr�s pra frente �: \n");
	for (i=ELEMENTOS-1; i>=0; i--)
		printf("v[%d] = %d\n",i,vet[i]);
		
	// 6 - Exibir a soma dos elementos PARES do vetor
	for (i=0; i<ELEMENTOS; i++)
		if ((vet[i] % 2)==0)
			soma_pares = soma_pares + vet[i];
	printf("\nA soma dos elementos PARES do seu vetor �: %d\n",soma_pares);
	
	// 7 - Exibir a soma dos elementos cujo �ndices sejam �mpares
	for (i=0; i<ELEMENTOS; i++)
		if ((i % 2)!=0)
			indices_imp = indices_imp + vet[i];
	printf("\nA soma dos elementos cujo �ndices s�o �mpares �: %d\n",indices_imp);
	
	// 8 - Exibir quantos elementos s�o negativos
	for (i=0; i<ELEMENTOS; i++)
		if (vet[i] < 0)
			negativos++;
	printf("\nA quantidade de elementos negativos �: %d\n",negativos);
	
	// 9 - Exibir o elemento de maior valor
	for (i=0; i<ELEMENTOS; i++)
		if (vet[i] > maior_valor)
			maior_valor = vet[i];
	printf("\nO elemento de maior valor do vetor �: %d\n",maior_valor);
		
	// 10 - Exibir o �ndice e o elemento de menor valor
	for (i=0; i<ELEMENTOS; i++)
		if (vet[i] < menor_valor){
			menor_valor = vet[i];
			ind_men_val = i;
		}
	printf("\nO elemento de menor valor do vetor e seu �ndice �: v[%d] = %d\n",ind_men_val, menor_valor);
	
	// 11 - Ordenar os elementos do vetor (e jog�-los em outro vetor)
		//Colocar todos os elementos no outro vetor para ordenar eles l�
	for (i=0; i<ELEMENTOS; i++)
		vet_ord[i] = vet[i];
		//Ordenar os elementos
			//Enquanto n�o estiverem todos em ordem ir� repetir o processo
	while (vet_ord[0]>vet_ord[1] || vet_ord[1]>vet_ord[2] || vet_ord[2]>vet_ord[3] || vet_ord[3]>vet_ord[4] || vet_ord[4]>vet_ord[5] || vet_ord[5]>vet_ord[6] || vet_ord[6]>vet_ord[7] || vet_ord[7]>vet_ord[8] || vet_ord[8]>vet_ord[9]){
		temp = vet_ord[0]; // Primeiro elemento
		for (i=0; i<ELEMENTOS; i++){
			if (temp > vet_ord[i]){
				// Se o elemento anterior for maior do que o atual, inverte o valor dos dois
				vet_ord[i-1] = vet_ord[i];
				vet_ord[i] = temp;
			}
			temp = vet_ord[i]; // Vai para o pr�ximo elemento
		}
	}
		//Exibindo o vetor com os elementos ordenados
	printf("\nSeu vetor em ordem crescente �: \n");
	for (i=0; i<ELEMENTOS; i++)
		printf("v[%d] = %d\n",i,vet_ord[i]);
}
