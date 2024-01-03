#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int m[3][4], l, c, soma=0, elemento, qtd_elem=0;
	
	//preenchendo A MATRIZ
	printf("PREENCHENDO A MATRIZ\n------------------------------------------------------------------------------\n");
	for(l = 0; l < 3; l++)
		for(c = 0; c < 4; c++){
			printf("Digite a posição [%d][%d] = ", l, c);
			scanf("%d",&m[l][c]);
		}
		
	//exibindo A MATRIZ
	printf("EXIBINDO A MATRIZ\n------------------------------------------------------------------------------\n");
	for(l = 0; l < 3; l++){
		for(c = 0; c < 4; c++)
			printf("m[%d][%d] = %d\t", l, c, m[l][c]);
		printf("\n");
	}
	printf("\n\nSOMA DOS ELEMENTOS DA MATRIZ\n------------------------------------------------------------------------------\n");
	for(l = 0; l < 3; l++)
		for(c = 0; c < 4; c++)
			soma = soma + m[l][c];
		printf("A soma dos elementos é: %d",soma);
		
	printf("\n\nDigite um elemento para procurar na matriz: ");
	scanf("%d", &elemento);
	
	for(l = 0; l < 3; l++)
		for(c = 0; c < 4; c++)
			if(elemento == m[l][c]){
				qtd_elem++;
			}
	printf("\nO elemento [%d] foi encontrado %d vezes na matriz!",elemento,qtd_elem);
	if(qtd_elem>=1){
		printf("\n\nEle foi encontrado nas segintes posições: \n");
		for(l = 0; l < 3; l++)
			for(c = 0; c < 4; c++)
				if(elemento == m[l][c])
					printf("m[%d][%d] = %d\t", l, c, m[l][c]);
	}
}
