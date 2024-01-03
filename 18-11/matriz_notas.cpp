#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int l, c;
	float matriz[10][4], n1, n2;
	
	for(l = 0; l < 10; l++){
		for(c = 0; c < 3; c++){
			printf("Digite a %dº nota do %dº aluno: ", c+1, l+1);
			scanf("%f",&matriz[l][c]);
		}
		matriz[l][3] = (matriz[l][0] + matriz[l][1] + matriz[l][2])/3;
		printf("\n");
		}
	printf("\nAS MÉDIAS FORAM: \n");
	for(l = 0; l < 10; l++){
		printf("Aluno %d: ",l+1);
		for(c = 0; c < 3; c++){
			printf("%.2f / ", matriz[l][c]);
		}
		printf("\b\b| média = %.2f ",matriz[l][3]);
		printf("\n");
	}
}
/*

V1. QUANTAS OCORRENCIAS DO ELEMENTO EXISTE NA MATRIZ
V2. TOP - INFORMAR EM QUAL LINHA E COLUNA ESTÁ (A PRIMEIRA)
V3. NERD - INFORMAR A LINHA E COLUNA DE TODAS AS OCORRENCIAS

Elaborar um programa que:
Crie uma matriz com 10 linhas (ALUNOS) e 4 colunas(NOTAS):
Ler 3 notas de 10 alunos, sendo:
	c0= 1ªnota | c1= 2ªnota | c2= 3ªnota
Calcular a media e atribuir na c3
Exibir a matriz

EXEMPLO:
N1  N2  N3  MED
4	5	6	5

*/
