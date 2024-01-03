#include <stdio.h>
#include <locale.h>

void exibir_vetor(int vet[10]){
	printf("\nO vetor que você digitou foi: \n");
	for (int i=0; i<10; i++)
		printf("v[%d] = %d\n",i,vet[i]);
}

int somar_vetor(int vet[10], int soma){
	for (int i=0; i<10; i++)
		soma = soma + vet[i];
	return soma;
}

void vetor_tras_pra_frente(int vet[10]){
	printf("\nO vetor de trás pra frente é: \n");
	for (int i=9; i>=0; i--)
		printf("v[%d] = %d\n",i,vet[i]);
}

int somar_numeros_pares(int vet[10], int soma_pares){
	for (int i=0; i<10; i++)
		if ((vet[i] % 2)==0)
			soma_pares = soma_pares + vet[i];
	return soma_pares;
}

int somar_indices_impares(int vet[10], int indices_imp){
	for (int i=0; i<10; i++)
		if ((i % 2)!=0)
			indices_imp = indices_imp + vet[i];
	return indices_imp;
}

int numero_de_elementos_negativos(int vet[10], int negativos){
	for (int i=0; i<10; i++)
		if (vet[i] < 0)
			negativos++;
	return negativos;
}

int elemento_de_maior_valor(int vet[10], int maior_valor){
	for (int i=0; i<10; i++)
		if (vet[i] > maior_valor)
			maior_valor = vet[i];
	return maior_valor;
}

void indice_e_elemento_de_menor_valor(int vet[10], int *ind_men_val, int *menor_valor){
	for (int i=0; i<10; i++)
		if (vet[i] < *menor_valor){
			*menor_valor = vet[i];
			*ind_men_val = i;
		}
}
void ordenar_elementos_em_outro_vetor(int vet[10], int vet_ord[10]){
	int temp;
		//Colocar todos os elementos no outro vetor para ordenar eles lá
	for (int i=0; i<10; i++)
		vet_ord[i] = vet[i];
		//Ordenar os elementos
			//Enquanto não estiverem todos em ordem irá repetir o processo
	while (vet_ord[0]>vet_ord[1] || vet_ord[1]>vet_ord[2] || vet_ord[2]>vet_ord[3] || vet_ord[3]>vet_ord[4] || vet_ord[4]>vet_ord[5] || vet_ord[5]>vet_ord[6] || vet_ord[6]>vet_ord[7] || vet_ord[7]>vet_ord[8] || vet_ord[8]>vet_ord[9]){
		temp = vet_ord[0]; // Primeiro elemento
		for (int i=0; i<10; i++){
			if (temp > vet_ord[i]){
				// Se o elemento anterior for maior do que o atual, inverte o valor dos dois
				vet_ord[i-1] = vet_ord[i];
				vet_ord[i] = temp;
			}
			temp = vet_ord[i]; // Vai para o próximo elemento
		}
	}
		//Exibindo o vetor com os elementos ordenados
	printf("\nSeu vetor em ordem crescente é: \n");
	for (int i=0; i<10; i++)
		printf("v[%d] = %d\n",i,vet_ord[i]);
}


int main (){
	
	setlocale(LC_ALL, "portuguese");
	
	int opcao, vet[10], i, soma=0, soma_pares=0, indices_imp, negativos=0, maior_valor=-9999, menor_valor=9999, ind_men_val, vet_ord[10];
	
	//1 - Zerar o vetor
	for (i=0; i<10; i++)
		vet[i] = 0;
		
	//2 - Ler o vetor	
	printf("Digite 10 dígitos para serem armazenados no seu vetor\n");
	for (i=0; i<10; i++){
		printf("v[%d] = ",i);
		scanf("%d",&vet[i]);
	}
	printf("\n1- Exibir o vetor\n2- Exibir a soma dos elementos do vetor\n3- Exibir o vetor de trás pra frente\n4- Exibir a soma dos elementos PARES do vetor\n5- Exibir a soma dos elementos cujo índices sejam ímpares\n6- Exibir quantos elementos são negativos\n7- Exibir o elemento de maior valor\n8- Exibir o índice e o elemento de menor valor\n9- Ordenar os elementos do vetor\n0- Parar o código");
    printf("\n\nAgora escolha uma opção: ");
	scanf("%d", &opcao);
	do{
	    switch (opcao)
	    {
	    case 1:
	    	// 3 - Exibir o vetor
			exibir_vetor(vet);
	        break;
	
	    case 2:
	    	// 4 - Exibir a soma dos elementos do vetor
			printf("\nA soma dos elementos do seu vetor é: %d\n",somar_vetor(vet,soma));
	        break;
	
	    case 3:
			// 5 - Exibir o vetor de trás pra frente
			vetor_tras_pra_frente(vet);
	        break;
	
	    case 4:
			// 6 - Exibir a soma dos elementos PARES do vetor
			printf("\nA soma dos elementos PARES do seu vetor é: %d\n",somar_numeros_pares(vet,soma_pares));
	        break;
	
	    case 5:
			// 7 - Exibir a soma dos elementos cujo índices sejam ímpares
			printf("\nA soma dos elementos cujo índices são ímpares é: %d\n",somar_indices_impares(vet,indices_imp));
	        break;
	
	    case 6:
			// 8 - Exibir quantos elementos são negativos
			printf("\nA quantidade de elementos negativos é: %d\n",numero_de_elementos_negativos(vet,negativos));
	        break;
	
	    case 7:
			// 9 - Exibir o elemento de maior valor
			printf("\nO elemento de maior valor do vetor é: %d\n",elemento_de_maior_valor(vet,maior_valor));
	        break;
	        
	    case 8:
			// 10 - Exibir o índice e o elemento de menor valor
			indice_e_elemento_de_menor_valor(vet,&ind_men_val,&menor_valor);
			printf("\nO elemento de menor valor do vetor e seu índice é: v[%d] = %d\n",ind_men_val, menor_valor);
	        break;
	        
	    case 9:
			// 11 - Ordenar os elementos do vetor (e jogá-los em outro vetor)
			ordenar_elementos_em_outro_vetor(vet,vet_ord);
	        break;

	    default:
	        printf("Número invalido\n\n");
	    }
	    printf("\nDigite mais uma opção (ou 0 para parar o código): ");
	    scanf("%d", &opcao);
	}while (opcao!=0);
}
