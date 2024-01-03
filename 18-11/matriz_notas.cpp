#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int l, c;
	float matriz[10][4], n1, n2;
	
	for(l = 0; l < 10; l++){
		for(c = 0; c < 3; c++){
			printf("Digite a %d� nota do %d� aluno: ", c+1, l+1);
			scanf("%f",&matriz[l][c]);
		}
		matriz[l][3] = (matriz[l][0] + matriz[l][1] + matriz[l][2])/3;
		printf("\n");
		}
	printf("\nAS M�DIAS FORAM: \n");
	for(l = 0; l < 10; l++){
		printf("Aluno %d: ",l+1);
		for(c = 0; c < 3; c++){
			printf("%.2f / ", matriz[l][c]);
		}
		printf("\b\b| m�dia = %.2f ",matriz[l][3]);
		printf("\n");
	}
}
/*

V1. QUANTAS OCORRENCIAS DO ELEMENTO EXISTE NA MATRIZ
V2. TOP - INFORMAR EM QUAL LINHA E COLUNA EST� (A PRIMEIRA)
V3. NERD - INFORMAR A LINHA E COLUNA DE TODAS AS OCORRENCIAS

Elaborar um programa que:
Crie uma matriz com 10 linhas (ALUNOS) e 4 colunas(NOTAS):
Ler 3 notas de 10 alunos, sendo:
	c0= 1�nota | c1= 2�nota | c2= 3�nota
Calcular a media e atribuir na c3
Exibir a matriz

EXEMPLO:
N1  N2  N3  MED
4	5	6	5

*/
