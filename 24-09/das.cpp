#include <stdio.h>
#include <locale.h>
float MediaNotas(float nota, float media){
	printf("Digite a primeira nota: ");
	scanf("%f",&nota);
	media = media + nota;
	printf("Digite a segundo nota: ");
	scanf("%f",&nota);
	media = media + nota;
	printf("Digite a terceira nota: ");
	scanf("%f",&nota);
	media = media + nota;
	printf("\nSua m�dia foi: %.2f\n",media/3);
	return (media/3);
}
void Conceitos(float media){
	if (media>=0 && media<5){
		printf("Sua men��o �: D\n");
	}
	else if (media>=5 && media<7){
		printf("Sua men��o �: C\n");
	}
	else if (media>=7 && media<9){
		printf("Sua men��o �: B\n");
	}
	else{
		printf("Sua men��o �: A\n");
	}
}
void Aprovado(float media){
	if (media >= 5){
		printf("Aluno Aprovado");
	}
	else{
		printf("Aluno Reprovado");
	}
}
int main (){
	setlocale(LC_ALL, "portuguese");
	float nota, media;
	char mencao;
	media = MediaNotas(nota, media);
	Conceitos(media);
	Aprovado(media);
}

