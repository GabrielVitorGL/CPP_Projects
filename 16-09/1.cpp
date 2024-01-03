#include <stdio.h>
#include <locale.h>

int main (){
	
	setlocale(LC_ALL, "portuguese");
	
	float venda, media;
	int cont, meta;
	
	printf("Digite as vendas dos 5 vendedores: ");
	for (cont=1; cont<=5; cont++){
		scanf("%f",&venda);
		media = media + venda;
		if (venda>=10000){
			meta = meta + 1;
		}
	}
	printf("%d Atingiram a meta\n",meta);
	printf("Média das vendas: %.2f",media/5);
}
	
