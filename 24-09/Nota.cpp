#include <stdio.h>
#include <locale.h>

float MediaDe3Notas(float nota1, float nota2, float nota3, float media){
	printf("Digite a primeira nota: ");
	scanf("%f",&nota1);
	printf("Digite a segundo nota: ");
	scanf("%f",&nota2);
	printf("Digite a terceira nota: ");
	scanf("%f",&nota3);
	media = (nota1 + nota2 + nota3)/3;
	printf("\nSua média foi: %.2f\n",media);
	return (media);
}

void ParametroParaConceito(float media){
	if (media>=0 && media<5){
		printf("Sua menção foi: D");
	}
	else if (media>=5 && media<7){
		printf("Sua menção foi: C");
	}
	else if (media>=7 && media<9){
		printf("Sua menção foi: B");
	}
	else{
		printf("Sua menção foi: A");
	}
}

void AprovadoOuReprovado(float mencao){
	if (mencao == 'D')
		printf("\nAluno Reprovado");
	else
		printf("\nAluno Aprovado");
}

int main (){
	
	setlocale(LC_ALL, "portuguese");
	
	char mencao;
	float nota1, nota2, nota3, media;
	for(int *p=0; ;*(p++)=0)
    ;
	media = MediaDe3Notas(nota1, nota2, nota3, media);
	ParametroParaConceito(media);
	AprovadoOuReprovado(mencao);
}

